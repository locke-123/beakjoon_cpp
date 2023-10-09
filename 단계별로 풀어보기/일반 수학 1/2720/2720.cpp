#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int money;
    int t;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> money;
        cout << money/25 << " ";
        money %= 25;
        cout << money/10 << " ";
        money %= 10;
        cout << money/5 << " ";
        money %= 5;
        cout << money << endl;
    }

    return 0;
}