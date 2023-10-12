#include <iostream>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    vector<string> arr;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        arr.push_back(s);
    }

    int Bcost;
    int Wcost;
    int minCost = 3000;

    for(int i=0; i<=N-8; i++){ //N 세로
        for(int j=0; j<=M-8; j++){ //M 가로(문자)
            Bcost = 0;
            Wcost = 0;
            for(int k=i; k<i+8; k++){
                for(int z=j; z<j+8; z++){
                    if(k%2 == 0 && z%2 != 0) {
                        if(arr[k][z] == 'B') {
                            Bcost++;
                        } else {
                            Wcost++;
                        }
                    } else if(k%2 == 0 && z%2 == 0) {
                        if(arr[k][z] == 'W') {
                            Bcost++;
                        } else {
                            Wcost++;
                        }
                    } else if(k%2 != 0 && z%2 != 0) {
                        if(arr[k][z] == 'W') {
                            Bcost++;
                        } else {
                            Wcost++;
                        }
                    } else {
                        if(arr[k][z] == 'B') {
                            Bcost++;
                        } else {
                            Wcost++;
                        }
                    }
                }
            }
            minCost = min(min(Bcost,Wcost),minCost);
        }
    }

    cout << minCost;

    return 0;
}