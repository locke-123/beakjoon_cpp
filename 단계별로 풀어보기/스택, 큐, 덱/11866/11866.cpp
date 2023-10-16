#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<int> q;
vector<int> r;
int main(){
    //freopen("i.txt", "r", stdin);
    int N, K;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        q.push(i+1);
    }
    K--;
    while (q.size() != 0)
    {
        for(int i=0; i<K; i++){
            q.push(q.front());
            q.pop();
        }
        r.push_back(q.front());
        q.pop();
    }

    cout << '<';
    for(int i=0; i<r.size(); i++){
        cout << r[i];
        if(i == r.size()-1){
            cout << '>';
        } else {
            cout << ", ";
        }
    }

    return 0;
}

// 1 2 3 4 5 6 7
// 3
// 1 2 4 5 6 7
// 3
// 1 2 4 5 7
// 3 6
// 1 4 5 7
// 3 6 2