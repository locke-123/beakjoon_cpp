#include <iostream>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    long long n;
    cin >> n;

    long long sum = 0;

    for(int i=1; i<=n-1; i++){
        for(int j=i+1; j<=n; j++){
            sum++;
        }
    }

    cout << sum << endl << 2;
    
    return 0;
}