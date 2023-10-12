#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    cin >> N;
    int minBag = -1;
    for(int i=0; i<=1000; i++){
        for(int j=0; j<1700; j++){
            if(i*5 + j*3 == N){
                if(minBag == -1){
                    minBag = i+j;
                } else {
                    minBag = min(minBag, i+j);
                }
            }
        }
    }

    cout << minBag;

    return 0;
}