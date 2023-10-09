#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    } else if(num == 2) {
        return true;
    } else if(num%2 == 0) {
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

    int M, N;
    vector<int> arr;
    cin >> M >> N;

    for(int i=M; i<=N; i++){
        if(isPrime(i)){
            arr.push_back(i);
        }
    }

    if(arr.size() < 1) {
        cout << -1;
    } else {
        sort(arr.begin(), arr.end());
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        cout << sum << endl << arr[0];
    }
    return 0;
}