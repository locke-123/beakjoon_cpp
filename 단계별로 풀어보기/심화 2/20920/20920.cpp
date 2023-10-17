#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
vector<string> arr;
unordered_map<string, int> m;
set<string> mySet;
bool comp(string a, string b){
    int alen = a.length();
    int blen = b.length();
    if(m[a] < m[b]){
        return false;
    } else if(m[a] > m[b]){
        return true;
    } else {
        if(alen < blen){
            return false;
        } else if(alen > blen){
            return true;
        } else {
            for(int i=0; i<alen; i++){
                if(a[i] > b[i]){
                    return false;
                } else if(a[i] < b[i]){
                    return true;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, M;
    string s;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> s;
        if(s.length() >= M){
            auto it = mySet.find(s);
            if(it == mySet.end()){
                arr.push_back(s);
                mySet.insert(s);
                m[s] = 1;
            } else {
                m[s]++;
            }
        }
    }
    sort(arr.begin(),arr.end(),comp);
    for(string word:arr){
        cout << word << '\n';
    }

    return 0;
}