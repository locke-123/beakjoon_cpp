#include <iostream>

using namespace std;
int arr[1000002];
int main(){
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    for(int i=4; i<=N; i++){
        if(i%3 == 0){
            if(i%2 == 0){
                arr[i] = min(arr[i/3]+1,min(arr[i/2]+1,arr[i-1]+1));
            } else {
                arr[i] = min(arr[i/3]+1, arr[i-1]+1);
            }
        } else {
            if(i%2 == 0){
                arr[i] = min(arr[i/2]+1,arr[i-1]+1);
            } else {
                arr[i] = arr[i-1]+1;
            }
        }
    }
    cout << arr[N];

    return 0;
}