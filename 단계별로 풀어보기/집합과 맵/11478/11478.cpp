#include <iostream>
#include <set>
using namespace std;
set<string> mySet;
int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        string res;
        for(int j=i; j<=j+i && j < s.length(); j++){
            string a = string(1,s[j]);
            res.append(a);
            mySet.insert(res);
        }
    }

    cout << mySet.size();

    return 0;
}