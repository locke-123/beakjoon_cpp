#include <iostream>
#include <stack>
#include <queue>
using namespace std;
stack<int> myStack;
queue<int> myQueue;
int main(){
    //freopen("i.txt", "r", stdin);
    int N,num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        myQueue.push(num);
    }
    int current = 1;
    bool flag = true;
    while(!myQueue.empty() || !myStack.empty()){
        if(!myQueue.empty()){
            if(myQueue.front() == current){
                myQueue.pop();
                current++;
            } else {
                if(!myStack.empty()){
                    if(myStack.top() == current){
                        myStack.pop();
                        current++;
                    } else {
                        myStack.push(myQueue.front());
                        myQueue.pop();
                    }
                } else {
                    myStack.push(myQueue.front());
                    myQueue.pop();
                }
            }
        } else {
            if(myStack.top() == current){
                myStack.pop();
                current++;
            } else {
                flag = false;
                break;
            }
        }
    }

    if(flag){
        cout << "Nice";
    } else {
        cout << "Sad";
    }

    return 0;
}