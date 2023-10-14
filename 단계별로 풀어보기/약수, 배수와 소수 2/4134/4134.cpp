#include <iostream>
#include <cmath>
using namespace std;

bool isPrime (long long num){
    if(num <= 1){
        return false;
    } else if(num == 2){
        return true;
    } else if(num%2 == 0) {
        return false;
    } else {
        for(long long i=2; i<=sqrt(num); i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    long long n, num;
    cin >> n;
    for(long long i=0; i<n; i++){
        cin >> num;
        long long target = num;
        while (true)
        {
            if(isPrime(target)){
                cout << target << endl;
                break;
            }
            target++;
        }
        
    }

    return 0;
}