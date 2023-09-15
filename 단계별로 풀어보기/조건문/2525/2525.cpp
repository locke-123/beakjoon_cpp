#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A,B,C;
    cin >> A >> B >> C;
    B = B + C;
    if(B > 59) {
        A = A + (B/60);
        B = B % 60;
    }
    if(A > 23) {
        A = A - 24;
    }

    cout << A << " " << B;

    return 0;
}