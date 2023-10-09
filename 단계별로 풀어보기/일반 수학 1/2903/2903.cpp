#include <iostream>

using namespace std;
int calc(int num);

int main(){
    //freopen("i.txt", "r", stdin);
    // 2;
    // 2*2 = 4 - 1 = 3;
    // 3*2 = 6 - 1 = 5;
    // 5*2 = 10 - 1 = 9;
    // 9*2 = 18 - 1 = 17;
    // 17 * 2 = 34 -1 = 33;
    int N;
    int num = 2;
    cin >> N;
    for(int i=0; i<N; i++){
        num = calc(num);
    }
    cout << num*num;

    return 0;
}

int calc(int num) {
    int result = num*2 - 1;
    return result;
}