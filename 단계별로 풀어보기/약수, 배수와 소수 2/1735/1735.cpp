#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int bottom = b*d;
    int top = a*d + c*b;
    int gcd = __gcd(top, bottom);
    top /= gcd; bottom /= gcd;

    while (gcd != 1)
    {
        gcd = __gcd(top, bottom);
        top /= gcd; bottom /= gcd;
    }

    cout << top << " " << bottom;

    return 0;
}