#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long a,b;
    cin >> a >> b;
    long long gcd = __gcd(a,b);
    cout << a*b/gcd;

    return 0;
}