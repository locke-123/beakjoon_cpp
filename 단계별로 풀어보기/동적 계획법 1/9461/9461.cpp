#include <iostream>
#include <vector>
using namespace std;
vector<long long> arr = {1,1,1,2,2,3,4,5};
long long dp(int n){
    if(n <= arr.size()){
        return arr[n-1];
    } else {
        arr.push_back(dp(n-1)+dp(n-5));
        return arr[n-1];
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    cin >> n;
    while (cin >> n)
    {
        cout << dp(n) << '\n';
    }
    

    return 0;
}