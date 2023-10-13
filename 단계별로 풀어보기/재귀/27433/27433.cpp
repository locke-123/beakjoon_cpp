#include <iostream>

using namespace std;

long long fact(long long num){
    if(num == 1 || num == 0) {
        return 1;
    }
    return num*fact(num-1);
}

int main(){
    //freopen("i.txt", "r", stdin);
    long long num;
    cin >> num;
    long long result = fact(num);
    cout << result;
    return 0;
}