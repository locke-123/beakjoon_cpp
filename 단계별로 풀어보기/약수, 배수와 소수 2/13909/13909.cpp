#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long N;
    cin >> N;
    long long count = 0;
    for(int i=1; i<=N; i++){
        if(i == 1){
            count++;
        } else {
            if(i*i <= N){
                count++;
            } else {
                break;
            }
        }
    }
    cout << count;

    return 0;
}