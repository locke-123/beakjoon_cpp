#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        int gcd = __gcd(a,b);
        cout << a*b/gcd << '\n';
    }

    return 0;
}