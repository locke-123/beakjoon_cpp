#include <iostream>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    if(num == 2) {
        return true;
    } else if(num%2 == 0){
        return false;
    }

    for(int i=2; i<=num/2; i++){
        if(num%i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    //freopen("i.txt", "r", stdin);

    int N, num;
    int count = 0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num;
        if(isPrime(num)){
            count++;
        }
    }

    cout << count;

    return 0;
}