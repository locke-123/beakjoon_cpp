#include <iostream>
#include <vector>
using namespace std;
int N;
int resMin;
bool isFirst = true;

bool promise(int n, int i, vector<vector<int>> &arr, vector<int> &used, vector<int> &start){
    if(n == 0) return true;
    if(used[i] == 1){
        return false;
    } else {
        if(start[n-1] >= i){
            return false;
        }
        return true;
    }
}

void bt(int n, vector<vector<int>> &arr, vector<int> &used, vector<int> &start, vector<int> &link) {
    if(n >= N/2){
        int k = 0;
        for(int i=0; i<N; i++){
            if(used[i] == 0){
                link[k] = i;
                k++;
            }
        }
        // for(int num:start){
        //     cout << num << ' ';
        // }
        // cout << "--- ";
        // for(int num:link){
        //     cout << num << ' ';
        // }
        int startScore = 0;
        for(int i=0; i<N/2; i++){
            for(int j=i+1; j<N/2; j++){
                startScore += arr[start[i]][start[j]];
                startScore += arr[start[j]][start[i]];
            }
        }
        int linkScore = 0;
        for(int i=0; i<N/2; i++){
            for(int j=i+1; j<N/2; j++){
                linkScore += arr[link[i]][link[j]];
                linkScore += arr[link[j]][link[i]];
            }
        }
        int minScore = abs(startScore - linkScore);
        //cout << " startScore: " << startScore << " linkScore: " << linkScore << '\n';
        if(isFirst){
            resMin = minScore;
            isFirst = false;
        } else {
            if(minScore < resMin){
                resMin = minScore;
            }
        }
        return;
    }
    for(int i=0; i<N; i++){
        if(promise(n, i, arr, used, start)){
            used[i] = 1;
            start[n] = i;
            bt(n+1, arr, used, start, link);
            used[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int num;
    cin >> N;
    vector<int> tmp(N);
    vector<vector<int>> arr(N,tmp);
    vector<int> used(N,0);
    vector<int> start(N/2);
    vector<int> link(N/2);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> num;
            arr[i][j] = num;
        }
    }
    bt(0, arr, used, start, link);
    cout << resMin;

    return 0;
}