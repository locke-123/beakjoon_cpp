#include <iostream>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N+1][10];
    arr[1][0] = 0;
    for(int i=1; i<10; i++){
        arr[1][i] = 1;
    }
    for(int i=2; i<=N; i++){
        for(int j=0; j<10; j++){
            if(j == 0){
                arr[i][j] = (arr[i-1][1])%1000000000;
            } else if(j == 9) {
                arr[i][j] = (arr[i-1][8])%1000000000;
            } else {
                arr[i][j] = (arr[i-1][j+1]+arr[i-1][j-1])%1000000000;
            }
        }
    }
    long long sum = 0;
    for(int i=0; i<=9; i++){
        cout << arr[N][i] << " sum: " << sum << '\n';
        sum += arr[N][i]%1000000000;
    }
    cout << sum%1000000000;
    return 0;
}