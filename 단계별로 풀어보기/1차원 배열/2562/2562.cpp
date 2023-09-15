#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N = 9;
    int max, index;
    for(int i=0; i < N; i++){
        int current;
        cin >> current;
        if(i == 0) {
            max = current;
            index = i+1;
        }
        if(current > max) {
            max = current;
            index = i+1;
        }
    }

    cout << max << endl << index;

    return 0;
}