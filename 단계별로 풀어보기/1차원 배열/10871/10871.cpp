#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N, X;
    cin >> N >> X;

    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    for(int i=0; i<N; i++){
        if(X > arr[i]){
            cout << arr[i] << " ";
        }
    }

    return 0;
}