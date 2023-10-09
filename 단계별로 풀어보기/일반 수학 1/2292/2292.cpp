#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long N;
    cin >> N;
    int num = 1;
    int multi = 1;
    if(N == 1) {
        cout << 1;
    } else {
        while (num < N)
        {
            num += 6*multi;
            multi++;
        }

        cout << multi;
    }
    return 0;
}