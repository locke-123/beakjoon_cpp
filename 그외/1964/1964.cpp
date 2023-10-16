#include <iostream>
using namespace std;
int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    long long num = 1;
    cin >> n;
    for(int i=1; i<=n; i++){
        num = num+3*i+1;
    }
    cout << num%45678;
    return 0;
}