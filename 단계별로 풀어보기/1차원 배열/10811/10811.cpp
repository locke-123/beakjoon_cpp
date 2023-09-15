#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    int arr[N+1];

    for(int i=1; i<N+1; i++){
        arr[i] = i;
    }

    for(int i=0; i<M; i++){
        int A,B;
        cin >> A >> B;
        if(A != B) {
            for(int j=A, k=B; j<=k; j++, k--){
                int tmp = arr[j];
                arr[j] = arr[k];
                arr[k] = tmp;
            }
        }
    }

    for(int i=1; i<N+1; i++){
        cout <<  arr[i] << " ";
    }

    return 0;
}