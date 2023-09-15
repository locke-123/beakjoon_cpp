#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;

    int arr[N];
    
    for(int i=0; i<N; i++){
        arr[i] = i+1;
    }

    for(int i=0; i<M; i++){
        int A, B;
        cin >> A >> B;
        int temp;
        temp = arr[A-1];
        arr[A-1] = arr[B-1];
        arr[B-1] = temp;
    }

    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}