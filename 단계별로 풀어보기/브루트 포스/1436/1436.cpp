#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    cin >> N;
    int count = 0;
    int number = 665;
    int sixCount;
    int result;
    while (count != N)
    {
        number++;
        string s = to_string(number);
        sixCount = 0;
        for(int i=0; i<s.length()-2; i++){
            if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6'){
                sixCount++;
                break;
            }
        }
        if(sixCount == 1){
            count++;
            result = number;
        }
    }
    
    cout << result;

    return 0;
}