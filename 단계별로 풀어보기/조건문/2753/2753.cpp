#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A;
    cin >> A;
    int result;

    if(A%4 == 0) {
        if(A%100 != 0) result = 1;
        else if(A%400 == 0) result = 1;
    }
    else result = 0;

    cout << result;

    return 0;
}