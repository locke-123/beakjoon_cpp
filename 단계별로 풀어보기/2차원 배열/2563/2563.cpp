#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int arr[100][100];

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            arr[i][j] = 0;
        }
    }

    int t;
    int n,m;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n >> m;
        n--;
        m--;
        for(int j=n; j<n+10; j++){
            for(int k=m; k<m+10; k++){
                arr[j][k] = 1;
            }
        }
    }

    int result = 0;

    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(arr[i][j] == 1) {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}