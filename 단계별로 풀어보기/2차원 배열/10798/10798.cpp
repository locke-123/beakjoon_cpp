#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    string s;
    char arr[5][15];
    int maxLength = 0;

    for(int i=0; i<5; i++) {
        for(int j=0; j<15; j++){
            arr[i][j] = '-';
        }
    }

    for(int i=0; i<5; i++) {
        cin >> s;
        if(s.length() > maxLength){
            maxLength = s.length();
        }
        for(int j=0; j<s.length(); j++){
            arr[i][j] = s[j];
        }
    }

    for(int i=0; i<maxLength; i++) {
        for(int j=0; j<5; j++){
            if(arr[j][i] == '-') {
                continue;
            }
            cout << arr[j][i];
        }
    }

    return 0;
}