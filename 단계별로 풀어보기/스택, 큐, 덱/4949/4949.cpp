#include <iostream>
#include <stack>
using namespace std;
int main(){
    //freopen("i.txt", "r", stdin);
    string s;
    while (getline(cin,s))
    {
        if(s[0] == '.'){
            break;
        }
        stack<char> myStack;
        bool flag = true;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                myStack.push(s[i]);
            } else if(s[i] == ')'){
                if(myStack.empty()){
                    flag = false;
                    break;
                } else {
                    if(myStack.top() != '('){
                        flag = false;
                        break;
                    } else {
                        myStack.pop();
                    }
                }
            } else if(s[i] == '['){
                myStack.push(s[i]);
            } else if(s[i] == ']'){
                if(myStack.empty()){
                    flag = false;
                    break;
                } else {
                    if(myStack.top() != '['){
                        flag = false;
                        break;
                    } else {
                        myStack.pop();
                    }
                }
            }
        }
        if(!myStack.empty()){
            flag = false;
        }
        if(flag){
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    

    return 0;
}