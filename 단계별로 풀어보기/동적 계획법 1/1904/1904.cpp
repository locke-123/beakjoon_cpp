#include <iostream>
#include <vector>
using namespace std;

int dp(int n, vector<int> &arr){
    if(arr[n] != -1){
        return arr[n];
    } else {
        arr[n] = (dp(n-1, arr) + dp(n-2, arr))%15746;
        return arr[n];
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    cin >> n;
    vector<int> arr(n+1, -1);
    arr[1] = 1;
    arr[2] = 2;
    cout << dp(n, arr);

    return 0;
}