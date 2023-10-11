#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long n, sum;

    cin >> n;
    sum = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
                sum++;
            }
        }
    }

    cout << sum << endl << 3;

    return 0;
}