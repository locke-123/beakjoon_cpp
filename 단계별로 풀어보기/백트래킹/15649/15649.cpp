#include <iostream>
#include <vector>
using namespace std;
void bt(int M, vector<int> &arr, vector<bool> &used, vector<int> &res){
    if(M == 0) {
        for(int num:res){
            cout << num << ' ';
        } cout << '\n';
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(used[i] == false){
            used[i] = true;
            res.push_back(arr[i]);
            bt(M-1, arr, used, res);
            used[i] = false;
            res.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, M;
    vector<int> arr;
    vector<int> res;
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        arr.push_back(i);
    }
    vector<bool> used(arr.size(),false);
    bt(M, arr, used, res);
    return 0;
}