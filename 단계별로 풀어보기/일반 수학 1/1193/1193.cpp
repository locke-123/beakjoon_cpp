#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    // 1 3 6 10 15 ...
    // 0 1 0 1 0 ...

    long long N;
    int num = 1;
    int adder = 2;
    bool even = false;
    cin >> N;

    while (num < N)
    {
        num += adder;
        adder++;
        even = !even;
    }

    int front, back;

    if(even == true){
        front = 1;
        back = adder-1;
        front += N - (num - adder+1)-1;
        back -= N - (num - adder+1)-1;
    } else {
        back = 1;
        front = adder-1;
        front -= N - (num - adder+1)-1;
        back += N - (num - adder+1)-1;
    }

    cout << front << "/" << back;
    

    return 0;
}