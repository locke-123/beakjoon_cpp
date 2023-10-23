#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;

int main(){
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);
    }
    vector<int> memo(N, -2000);
    int maxNum = arr[0];
    memo[0] = arr[0];
    for(int i=1; i<arr.size(); i++) {
        if(memo[i-1]+arr[i] > arr[i]){
            if(maxNum < memo[i-1]+arr[i]){
                maxNum = memo[i-1]+arr[i];
            }
            memo[i] = memo[i-1]+arr[i];
        } else {
            if(maxNum < arr[i]){
                maxNum = arr[i];
            }
            memo[i] = arr[i];
        }
    }
    cout << maxNum;
    // cout << '\n';
    // for(int a:memo){
    //     cout << a << ' ';
    // }
    return 0;
}