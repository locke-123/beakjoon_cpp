#include <iostream>
#include <stack>
using namespace std;
stack<int> myStack;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, order, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> order;
        if(order == 1){
            cin >> num;
            myStack.push(num);
        } else if(order == 2){
            if(!myStack.empty()){
                cout << myStack.top() << '\n';
                myStack.pop();
            } else {
                cout << -1 << '\n';
            }
        } else if(order == 3){
            cout << myStack.size() << '\n';
        } else if(order == 4){
            if(myStack.empty()){
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else {
            if(!myStack.empty()){
                cout << myStack.top() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}