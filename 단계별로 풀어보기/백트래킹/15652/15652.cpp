#include <iostream>
#include <vector>
using namespace std;

bool promise(int i, vector<int> &arr, vector<int> &res){
    if(res.size() == 0){
        return true;
    } else {
        if(res.back() <= arr[i]){
            return true;
        } else {
            return false;
        }
    }
}

void bt(int M, vector<int> &arr, vector<int> &res){
    if(M == 0){
        for(int num:res){
            cout << num << ' ';
        } cout << '\n';
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(promise(i,arr,res)){
            res.push_back(arr[i]);
            bt(M-1, arr, res);
            res.pop_back();
        }
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    vector<int> arr;
    for(int i=1; i<=N; i++){
        arr.push_back(i);
    }
    vector<int> res;
    bt(M, arr, res);

    return 0;
}