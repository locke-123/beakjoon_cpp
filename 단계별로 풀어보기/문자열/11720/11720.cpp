#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    int sum = 0;
    cin >> N;

    char arr[N];
    for(int i=0; i<N; i++){
        char c;
        cin >> c;
        arr[i] = c;
    }

    for(int i=0; i<N; i++){
        sum += static_cast<int>(arr[i])-48;
    }


    cout << sum;
    return 0;
}