#include <iostream>
#include <set>
using namespace std;
set<string> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N;
    string u;
    cin >> N;
    int count = 0;
    for(int i=0; i<N; i++){
        cin >> u;
        if(u == "ENTER"){
            s.clear();
        } else {
            auto it = s.find(u);
            if(it == s.end()){
                s.insert(u);
                count++;
            }
        }
    }
    cout << count;

    return 0;
}