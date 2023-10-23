#include <iostream>
#include <vector>
using namespace std;

vector<int> memo(302);
vector<int> arr(302);

int main(){
    memo[0] = 0;
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> num;
        arr[i] = num;
    }
    for(int i=1; i<=N; i++){
        if(i == 1){
            memo[i] = arr[i];
        } else if(i == 2){
            memo[i] = arr[i] + arr[i-1];
        } else {
            memo[i] = max(arr[i]+memo[i-2],arr[i]+arr[i-1]+memo[i-3]);
        }
    }
    cout << memo[N];


    return 0;
}