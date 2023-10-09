#include <iostream>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    } else if(num == 2){
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

    int N;
    cin >> N;

    if(N == 1) return 0;

    while (true)
    {
        if(isPrime(N)) {
            cout << N;
            break;
        } else {
            for(int i=2; i<=N/2; i++){
                if(isPrime(i) && N%i == 0){
                    cout << i << endl;
                    N = N/i;
                    break;
                }
            }
        }
    }
    

    return 0;
}