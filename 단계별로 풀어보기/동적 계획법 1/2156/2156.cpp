#include <iostream>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    int arr[N];
    int memo[N];
    for(int i=0; i<N; i++){
        cin >> num;
        arr[i] = num;
        if(i == 0){
            memo[i] = num;
        } else if(i == 1){
            memo[i] = memo[i-1]+num;
        } else if(i == 2){
            memo[i] = max(memo[i-1],max(arr[i-1]+num,arr[i-2]+num));
            //memo[i] = max(arr[i-1]+num,arr[i-2]+num);
        } else {
            memo[i] = max(memo[i-1],max(memo[i-3]+arr[i-1]+num,memo[i-2]+num));
        }
    }
    int mnum = -1;
    for(int num:memo){
        cout << num << ' ';
        if(num > mnum){
            mnum = num;
        }
    }
    cout << mnum;


    return 0;
}