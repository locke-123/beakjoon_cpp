#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}