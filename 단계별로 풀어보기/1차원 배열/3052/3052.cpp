#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N = 10;
    int arr[N];

    for(int i=0; i<N; i++){
        int Num;
        cin >> Num;
        arr[i] = Num%42;
    }

    int count = 10;

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            if(arr[i] == arr[j]) {
                count--;
                break;
            }
        }
    }

    cout << count;

    return 0;
}