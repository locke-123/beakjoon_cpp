#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int a1, a2, c, n;
    cin >> a1 >> a2 >> c >> n;

    if(n*a1 + a2 <= n*c && c - a1 >= 0) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}