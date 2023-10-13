#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

set<string> notHear;
set<string> notSee;
vector<string> arr;
int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        notHear.insert(s);
    }
    for(int i=0; i<M; i++){
        string s;
        cin >> s;
        notSee.insert(s);
    }
    if(notHear.size() > notSee.size()) {
        for(string name : notHear){
            auto it = notSee.find(name);
            if(it != notSee.end()){
                arr.push_back(name);
            }
        }
    } else {
        for(string name : notSee){
            auto it = notHear.find(name);
            if(it != notHear.end()){
                arr.push_back(name);
            }
        }
    }
    sort(arr.begin(), arr.end());
    cout << arr.size() << '\n';
    for(string name : arr){
        cout << name << "\n";
    }

    return 0;
}