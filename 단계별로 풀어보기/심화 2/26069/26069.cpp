#include <iostream>
#include <set>
using namespace std;
set<string> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N;
    string a, b;
    s.insert("ChongChong");
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        auto ait = s.find(a);
        auto bit = s.find(b);
        if(ait != s.end()){//a 찾음
            if(bit != s.end()){//b 찾음
                continue;
            } else {//b 못찾음
                s.insert(b);
            }
        } else { //a 못찾음
            if(bit != s.end()){//b 찾음
                s.insert(a);
            } else {//b 못찾음
                continue;
            }
        }
    }

    cout << s.size();

    return 0;
}