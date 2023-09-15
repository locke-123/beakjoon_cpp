#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A, B, C, result;
    cin >> A >> B >> C;
    if(A == B && B == C) {
        result = 10000 + (A*1000);
    } else if(A == B) {
        result = 1000 + (A*100);
    } else if(B == C) {
        result = 1000 + (B*100);
    } else if(A == C) {
        result = 1000 + (A*100);
    } else {
        result = max(max(A,B),C)*100;
    }

    cout << result;

    return 0;
}