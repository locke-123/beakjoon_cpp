#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        string S;
        cin >> S;
        cout << S[0] << S[S.length()-1] << endl;
    }

    return 0;
}