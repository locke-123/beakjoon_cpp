#include <iostream>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N,M;
    cin >> N >> M;
    int num;
    int arr[N][M];


    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> num;
            arr[i][j] += num;
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}