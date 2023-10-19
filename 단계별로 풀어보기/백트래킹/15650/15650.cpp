#include <iostream>
#include <vector>
using namespace std;
bool promise(int i, vector<int> &arr, vector<bool> &used, vector<int> &res);
void bt(int M, vector<int> &arr, vector<bool> &used, vector<int> &res){
    if(M == 0){
        for(int num:res){
            cout << num << ' ';
        } cout << '\n';
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(promise(i, arr, used, res)){
            used[i] = true;
            res.push_back(arr[i]);
            bt(M-1, arr, used, res);
            used[i] = false;
            res.pop_back();
        }
    }
}

bool promise(int i, vector<int> &arr, vector<bool> &used, vector<int> &res){
    if(used[i] == true) return false;
    if(res.size() == 0){
        return true;
    } else {
        if(res.back() < arr[i]){
            return true;
        } else {
            return false;
        }
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    vector<int> arr;
    vector<int> res;
    for(int i=1; i<=N; i++){
        arr.push_back(i);
    }
    vector<bool> used(arr.size(),false);
    bt(M, arr, used, res);

    return 0;
}