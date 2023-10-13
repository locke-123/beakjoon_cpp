#include <iostream>
#include <stack>
using namespace std;

int count = 0;
stack<int> f;
stack<int> s;
stack<int> t;

int recursionNum(int num) {
    if(num == 1){
        return 1;
    } else {
        return recursionNum(num-1)*2+1;
    }
}

void recursion(int num, stack<int>& from, stack<int>& to, stack<int>& other, int fromNum, int toNum, int otherNum){
    if(num == 1){
        int target = from.top();
        from.pop();
        to.push(target);
        cout << fromNum << " " << toNum << "\n";
        count++;
    } else  {
        recursion(num-1, from, other, to, fromNum, otherNum, toNum);
        recursion(1, from, to, other, fromNum, toNum, otherNum);
        recursion(num-1, other, to, from, otherNum, toNum, fromNum);
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    for(int i=N; i>0; i--){
        f.push(i);
    }
    cout << recursionNum(N) << '\n';
    recursion(N, f, t, s, 1, 3, 2);
    //recursion(N, f, s, t, 1, 2, 3);

    return 0;
}