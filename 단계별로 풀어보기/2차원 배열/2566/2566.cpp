#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int max = -1;
    int n,m;
    int arr[9][9];

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> arr[i][j];
            if(arr[i][j] > max) {
                max = arr[i][j];
                n = i+1;
                m = j+1;
            }
        }
    }

    cout << max << endl << n << " " << m;

    return 0;
}