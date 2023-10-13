#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    set<string> mySet;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string n, s;
        cin >> n >> s;
        if(s == "enter"){
            mySet.insert(n);
        } else {
            mySet.erase(n);
        }
    }
    vector<string> arr(mySet.begin(), mySet.end());
    sort(arr.rbegin(), arr.rend());

    for(string name : arr){
        cout << name << '\n';
    }

    return 0;
}