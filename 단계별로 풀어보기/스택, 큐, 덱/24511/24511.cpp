#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> type;
vector<int> v;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        type.push_back(num);
    }
    for(int i=0; i<N; i++){
        cin >> num;
        if(type[i] == 0){
            v.push_back(num);
        }
    }
    for(int i=v.size()-1; i>=0; i--){
        q.push(v[i]);
    }
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        q.push(num);
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}