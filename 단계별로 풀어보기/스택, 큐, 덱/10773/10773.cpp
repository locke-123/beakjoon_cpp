#include <iostream>
#include <stack>
using namespace std;
stack<int> myStack;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int K, num;
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> num;
        if(num == 0){
            myStack.pop();
        } else {
            myStack.push(num);
        }
    }
    long long sum = 0;
    int a = myStack.size();
    for(int i=0; i<a; i++){
        sum += myStack.top();
        myStack.pop();
    }

    cout << sum;

    return 0;
}