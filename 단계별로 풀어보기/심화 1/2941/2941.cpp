#include <iostream>
#include <vector>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    string s;
    cin >> s;

    int result = 0;

    for(int i=0; i<s.length(); i++) {        
        switch (s[i])
        {
        case 'l':
            if(i+1 < s.length() && s[i+1] == 'j') {
                result++;
                i++;                
            } else {
                result++;
            }
            break;
        case 'c':
            if(i+1 < s.length() && s[i+1] == '=') {
                result++;
                i++;                
            } else if(i+1 < s.length() && s[i+1] == '-') {
                result++;
                i++;                
            } else {
                result++;
            }
            break;
        case 'd':
            if(i+1 < s.length() && s[i+1] == '-') {
                result++;
                i++;                
            } else if(i+1 < s.length() && s[i+1] == 'z') {
                if(i+2 < s.length() && s[i+2] == '=') {
                    result++;
                    i += 2;                    
                } else {
                    result++;
                }
            } else {
                result++;
            }
            break;
        case 'n':
            if(i+1 < s.length() && s[i+1] == 'j') {
                result++;
                i++;                
            } else {
                result++;
            }
            break;
        case 's':
            if(i+1 < s.length() && s[i+1] == '=') {
                result++;
                i++;                
            } else {
                result++;
            }
            break;
        case 'z':
            if(i+1 < s.length() && s[i+1] == '=') {
                result++;
                i++;
            } else {
                result++;
            }
            break;
        default:
            result++;
        }
    }

    cout << result;

    return 0;
}