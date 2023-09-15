#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N = 30;
    int arr[N];

    for(int i=0; i<N; i++){
        arr[i] = 0;
    }

    for(int i=0; i<N; i++){
        int current;
        cin >> current;
        arr[current-1] = 1;
    }

    for(int i=0; i<N; i++){
        if(arr[i] == 0) {
            cout << i+1 << endl;
        }
    }

    return 0;
}