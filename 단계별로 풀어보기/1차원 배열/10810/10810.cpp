#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;

    int arr[N];

    for(int i=0; i<N; i++){
        arr[i] = 0;
    }

    for(int i=0; i<M; i++){
        int A,B,C;
        cin >> A >> B >> C;
        for(int j=A-1; j<=B-1; j++){
            arr[j] = C;
        }
    }

    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}