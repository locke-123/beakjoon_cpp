#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    vector<char> arr;
    vector<char> arr2;

    for(int i=0; i<3; i++){
        char c;
        cin >> c;
        arr.push_back(c);
    }

    cin >> std::ws;

    for(int i=0; i<3; i++){
        char c;
        cin >> c;
        arr2.push_back(c);
    }

    int A = 0;
    int B = 0;

    for(int i=2; i>=0; i--){
        int powOf10 = 1;
        for(int j=0; j<i; j++){
            powOf10 = powOf10 * 10;
        }
        A += (arr[i]-'0')*powOf10;
        B += (arr2[i]-'0')*powOf10;
    }

    if(A > B) {
        cout << A;
    } else {
        cout << B;
    }

    return 0;
}