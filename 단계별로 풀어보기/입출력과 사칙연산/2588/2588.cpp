#include <iostream>

using namespace std;

int main (){
    // freopen("i.txt", "r", stdin);
    int A, B;
    cin >> A >> B;
    int res1 = A * ((B%100)%10);
    int res2 = A * ((B%100)/10);
    int res3 = A * (B/100);
    int res4 = res1 + (res2 * 10) + (res3 * 100);
    cout << res1 << endl;
    cout << res2 << endl;
    cout << res3 << endl;
    cout << res4 << endl;
}