#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A, B, result;
    cin >> A >> B;

    if(A > 0) {
        if(B > 0) result = 1;
        else result = 4;
    } else {
        if(B > 0) result = 2;
        else result = 3;
    }

    cout << result;

    return 0;
}