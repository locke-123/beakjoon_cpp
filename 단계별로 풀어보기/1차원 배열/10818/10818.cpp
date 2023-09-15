#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int max = -1000001;
    int min = 1000001;

    for(int i=0; i<N; i++){
        int current;
        cin >> current;
        if(current > max) {
            max = current;
        }
        if(current < min) {
            min = current;
        }
    }

    cout << min << " " << max;

    return 0;
}