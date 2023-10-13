#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
map<string, int> myMap;
int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<string> arr;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        myMap[s] = i+1;
        arr.push_back(s);
    }
    arr.push_back("totoro");
    for(int i=0; i<M; i++){
        int num;
        if(cin >> num){
            cout << arr[num-1] << '\n';
        } else {
            cin.clear();
            string s;
            cin >> s;
            cout << myMap[s] << '\n';
        }
    }
    return 0;
}