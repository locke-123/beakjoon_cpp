#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int f,s,t;
    int max = 0;
    bool flag = false;

    for(int i=0; i<N; i++){
        f = arr[i];
        for(int j=i+1; j<N; j++){
            s = arr[j];
            for(int k=j+1; k<N; k++){
                t = arr[k];
                if(f+s+t <= M && max <= f+s+t){
                    max = f+s+t;
                }
            }
        }
    }

    cout << max;

    return 0;
}