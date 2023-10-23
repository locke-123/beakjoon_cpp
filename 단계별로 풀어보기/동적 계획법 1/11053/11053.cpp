#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N];
    int memo[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    memo[0] = 1;
    for(int i=1; i<N; i++){
        int mnum = 0;
        for(int j=0; j<i; j++){
            if(arr[i] > arr[j]){
                mnum = max(mnum, memo[j]);
            }
        }
        memo[i] = mnum+1;
    }
    int MAX = 0;
    for(int num:memo){
        //cout << num << ' ';
        MAX = max(MAX,num);
    }
    cout << MAX;

    return 0;
}