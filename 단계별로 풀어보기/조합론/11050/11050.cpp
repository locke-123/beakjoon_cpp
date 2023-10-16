#include <iostream>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    int n,k;
    long long a = 1,b = 1,c = 1;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        a *= i;
    }
    for(int i=1; i<=k; i++){
        b *= i;
    }
    for(int i=1; i<=n-k; i++){
        c *= i;
    }
    cout << a << ' ' << b << ' ' << c << endl;
    cout << a/(b*c);

    return 0;
}