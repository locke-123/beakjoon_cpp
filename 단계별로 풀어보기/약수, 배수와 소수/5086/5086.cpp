#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int A,B;

    while (true)
    {
        cin >> A >> B;
        if(A == 0 && B == 0){
            break;
        }

        if(A > B && A%B == 0) {
            cout << "multiple" << endl;
        } else if(A < B && B%A == 0) {
            cout << "factor" << endl;
        } else {
            cout << "neither" << endl;
        }
    }

    return 0;
}