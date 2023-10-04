#include <iostream>
#include <string>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    string s;

    while (!cin.eof())
    {
        getline(cin, s);
        cout << s << endl;
    }

    return 0;
}