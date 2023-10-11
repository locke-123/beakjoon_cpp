#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int A,B,C;
    cin >> A >> B >> C;

    int maxLen = max(A,max(B,C));
    if(maxLen < A+B+C-maxLen) {
        cout << A + B + C;
    } else {
        cout << (A+B+C-maxLen)*2-1;
    }

    return 0;
}