#include <iostream>
#include <cmath>
#include <vector>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    vector<int> arr(300000, 0);
    for(int i=1; i<=123456*2; i++){
        if(isPrime(i)){
            arr[i] = arr[i-1] + 1;
        } else {
            arr[i] = arr[i-1];
        }
    }
    int num;
    while (true)
    {
        cin >> num;
        if(num == 0){
            break;
        }
        cout << arr[num*2] - arr[num] << '\n';
    }

    return 0;
}