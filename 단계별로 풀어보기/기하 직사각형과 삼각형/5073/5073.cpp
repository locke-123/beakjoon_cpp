#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int A,B,C;

    while (true)
    {
        cin >> A >> B >> C;
        if(A == 0 && B == 0 && C == 0) break;
        int maxLine = max(C,max(A,B));
        if(maxLine < A+B+C-maxLine) {
            if(A == B && B == C && A == C) {
                cout << "Equilateral";
            } else if(A == B || B == C || A == C) {
                cout << "Isosceles";
            } else {
                cout << "Scalene";
            }
        } else {
            cout << "Invalid";
        }
        cout << endl;
    }
    

    return 0;
}