#include <iostream>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    vector<int> tmp(N);
    vector<vector<int>> memo(2, tmp);
    memo[0][0] = 1;
    // memo[0] == 오름   memo[1] == 내림 
    for(int i=1; i<N; i++){ //memo[i]
        int maxIndex = -1;
        int maxNum = 0;
        int maxMemo = 0;
        int maxMemoIndex = -1;
        for(int j=i-1; j>=0; j--){
            //cout << " i: " << i << " j: " << j << " maxnum: " << maxNum << " index: " << maxIndex << '\n';
            if(arr[i] > arr[j]){
                if(memo[0][j] > maxMemo){
                    maxMemo = memo[0][j];
                    maxMemoIndex = j;
                }
                if(arr[j] > maxNum){
                    maxNum = arr[j];
                    maxIndex = j;
                }
            }
        }
        if(maxIndex == -1){
            memo[0][i] = 1;
        } else {
            memo[0][i] = max(memo[0][maxIndex]+1, memo[0][maxMemoIndex]+1);
        }
    }

    memo[1][N-1] = 1;
    for(int i=N-2; i>=0; i--){ //memo[i]
        int maxIndex = -1;
        int maxNum = 0;
        int maxMemo = 0;
        int maxMemoIndex = -1;
        for(int j=i+1; j<N; j++){
            //cout << " i: " << i << " j: " << j << " maxnum: " << maxNum << " index: " << maxIndex << '\n';
            if(arr[i] > arr[j]){
                if(memo[1][j] > maxMemo){
                    maxMemo = memo[1][j];
                    maxMemoIndex = j;
                }
                if(arr[j] > maxNum){
                    maxNum = arr[j];
                    maxIndex = j;
                }
            }
        }
        if(maxIndex == -1){
            memo[1][i] = 1;
        } else {
            memo[1][i] = max(memo[1][maxIndex]+1, memo[1][maxMemoIndex]+1);
        }
    }

    int result = 0;
    for(int i=0; i<N; i++){
        //cout << memo[0][i] << ' ';
        int target = memo[0][i] + memo[1][i] - 1;
        if(target > result){
            result = target;
        }
    }
    // cout << '\n';
    // for(int i=0; i<N; i++){
    //     cout << memo[0][i] << ' ';
    // }
    // cout << '\n';
    // for(int i=0; i<N; i++){
    //     cout << memo[1][i] << ' ';
    // }
    // cout << '\n';
    cout << result;
    // 10 20 30 25 20 40 10
    // 1  2  3  3  2  4  1 // 내꺼보다 작은것중 젤 큰거+1;
    // 1  1  1  4  5  1  6 //내꺼보다 작은것중 젤 큰거+1 오른쪽부터;

    // *   *     * * * * *
    // 1 5 2 1 4 3 4 5 2 1
    // 1 2 2 1 3 3 4 5 2 1
    //         4 3 3 3 2 1
    // -1

    return 0;
}