#include <iostream>

using namespace std;

int fibo(int num){
    if(num == 0){
        return 0;
    } else if(num == 1){
        return 1;
    } else {
        return fibo(num-1)+fibo(num-2);
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    cin >> n;
    int res = fibo(n);
    cout << res;

    return 0;
}