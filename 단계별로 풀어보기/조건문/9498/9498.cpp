#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int A;
    cin >> A;
    string result;
    if(A >= 90) result = "A";
    else if(A >= 80) result = "B";
    else if(A >= 70) result = "C";
    else if(A >= 60) result = "D";
    else result = "F";
    cout << result;
    return 0;
}