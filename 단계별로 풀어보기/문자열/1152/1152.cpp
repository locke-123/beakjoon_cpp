#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int count = 0;

    while (cin.eof() == false)
    {
        string S;
        cin >> S;
        if(S.length() == 0) break;
        count++;
    }

    cout << count;
    

    return 0;
}