#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int total, N, result;
    cin >> total >> N;
    result = 0;

    for(int i=0; i<N; i++){
        int price, amount;
        cin >> price >> amount;
        result = result + (price * amount);
    }

    if(total == result) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}