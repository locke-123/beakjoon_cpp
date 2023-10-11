#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int A,B,C;
    cin >> A >> B >> C;

    if(A == B && B == C && C == 60) {
        cout << "Equilateral";
    } else if (A+B+C == 180) {

        if(A == B || B == C || A == C){
            cout << "Isosceles";
        } else {
            cout << "Scalene";
        }


    } else {
        cout << "Error";
    }

    return 0;
}