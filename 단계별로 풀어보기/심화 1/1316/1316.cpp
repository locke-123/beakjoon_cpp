#include <iostream>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    string s;
    int num = 0;
    cin >> num;
    int result = 0;
    bool flag = true;

    for(int i=0; i<num; i++) {
        cin >> s;
        vector<char> arr;
        flag = true;
        for(int j=0; j<s.length(); j++){

            for(int k=0; k<arr.size(); k++) {
                if(arr[k] == s[j]) {
                    if(j-1 > -1 && s[j-1] == arr[k]) {
                        break;
                    } else {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == false) {
                break;
            }

            arr.push_back(s[j]);

        }
        if(flag == true) {
            result++;
        }
    }

    cout << result;

    return 0;
}