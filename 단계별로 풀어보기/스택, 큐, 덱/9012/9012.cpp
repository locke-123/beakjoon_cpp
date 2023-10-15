#include <iostream>
#include <stack>
using namespace std;
stack<char> myStack;
int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    string s;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> s;
        bool flag = true;
        for(int j=0; j<s.length(); j++){
            if(s[j] == '(') {
                myStack.push(s[j]);
            } else if(s[j] == ')') {
                if(myStack.empty()){
                    flag = false;
                    break;
                } else {
                    myStack.pop();
                }
            }
        }
        int a = myStack.size();
        if(a > 0){
            flag = false;
            for(int i=0; i<a; i++){
                myStack.pop();
            }
        }

        if(flag){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}