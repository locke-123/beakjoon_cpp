#include <iostream>
#include <vector>
using namespace std;
int fibCount = 1;
int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    } else {
        fibCount++;
        return (fib(n-1) + fib(n-2));
    }
}

int dpCount = 0;
vector<int> arr;
int dp(int n){
    arr.push_back(1);
    arr.push_back(1);
    for(int i=2; i<n; i++){
        dpCount++;
        arr.push_back(arr[i-1]+arr[i-2]);
    }
    return arr[n-1];
}

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    cin >> n;
    fib(n);
    dp(n);
    cout << fibCount << '\n' << dpCount;
    return 0;
}