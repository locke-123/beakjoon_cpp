#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    set<string> mySet;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        mySet.insert(s);
    }

    int count = 0;
    for(int i=0; i<M; i++){
        string t;
        cin >> t;
        auto it = mySet.find(t);
        if(it != mySet.end()) count++;
    }

    cout << count;

    return 0;
}