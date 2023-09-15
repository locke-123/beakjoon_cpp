#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    
    int myArr[N];
    for(int i=0; i<N; i++){
        cin >> myArr[i];
    }

    int v;
    cin >> v;

    int count = 0;
    for(int i=0; i<N; i++){
        if(v == myArr[i]) {
            count++;
        }
    }

    cout << count;

    return 0;
}