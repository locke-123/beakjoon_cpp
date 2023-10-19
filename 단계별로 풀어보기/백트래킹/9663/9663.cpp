#include <iostream>
#include <vector>
using namespace std;
int count = 0;
bool promise(int i, int current, int N, vector<vector<int>> &arr){
    if(current == 0){
        return true;
    }
    //세로검사
    for(int j=0; j<N; j++){
        if(arr[j][i] == 1){
            return false;
        }
    }
    //대각검사
    int minAxis = min(current,i);
    int xi = i-minAxis;
    for(int j=current-minAxis; j<N; j++){
        if(xi >= N){
            xi++;
            continue;
        } 
        if(arr[j][xi] == 1){
            return false;
        }
        xi++;
    }
    xi = i+current;
    for(int j=0; j<N; j++){
        if(xi >= N || xi < 0){
            xi--;
            continue;
        }
        if(arr[j][xi] == 1){
            return false;
        }
        xi--;
    }

    return true;
}

void bt(int current,int N, vector<vector<int>> &arr){//current 는 세로줄
    if(current >= N){
        count++;
        return;
    }
    for(int i=0; i<N; i++){ //i는 가로줄
        if(promise(i, current, N, arr)){
            arr[current][i] = 1;
            bt(current+1, N, arr);
            arr[current][i] = 0;
        }
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    vector<int> tmp(N, 0);
    vector<vector<int>> arr(N, tmp);
    bt(0, N, arr);
    cout << count;

    return 0;
}