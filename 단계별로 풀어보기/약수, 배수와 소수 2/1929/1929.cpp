#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    } else if(num == 2){
        return true;
    } else if(num%2 == 0){
        return false;
    } else {
        for(int i=2; i<=sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N,M;
    cin >> N >> M;

    for(int i=N; i<=M; i++){
        if(isPrime(i)){
            cout << i << '\n';
        }
    }

    return 0;
}