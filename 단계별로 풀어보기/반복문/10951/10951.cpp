#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    while (true)
    {
        int A,B;
        cin >> A >> B;
        if(cin.eof()) break;
        else cout << A + B << endl;
    }

    return 0;
}