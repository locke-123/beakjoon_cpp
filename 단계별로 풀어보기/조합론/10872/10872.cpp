#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long n, num;
    cin >> n;
    for(int i=n-1; i>0; i--){
        n *= i;
    }
    if(n == 0){
        cout << 1;
    } else {
        cout << n;
    }
    return 0;
}