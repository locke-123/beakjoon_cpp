#include <iostream>
#include <cmath>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);

    string s;
    int num;
    int target;
    int result = 0;
    cin >> s >> num;
    for(int i=0; i<s.length(); i++){
        target = static_cast<int>(s[i])-'0';
        if(target > 9) {
            target = static_cast<int>(s[i])-55;
        }
        result += target*(pow(num,s.length()-i-1));
    }
    cout << result;

    return 0;
}