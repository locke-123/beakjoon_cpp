#include <iostream>
using namespace std;


int main(){
    //freopen("i.txt", "r", stdin);

    string input;

    cin >> input;

    int firstT = 0;
    int lastT = input.length()-1;
    int result = 1;

    if(firstT == lastT) {
        result = 1;
    } else {
        for(int i=0; i<input.length()/2; i++) {
            if(input[firstT] != input[lastT]){
                result = 0;
                break;
            } else {
                firstT++;
                lastT--;
            }
        }
    }

    cout << result;

    return 0;
}