#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A, B;
    cin >> A >> B;
    B = B - 45;
    if(B < 0) {
        A--;
        B = 60 + B;
    }
    if(A < 0) {
        A = 23;
    }
    cout << A << " " << B;

    return 0;
}