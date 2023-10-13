#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr(10001,0);
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    //freopen("i.txt", "r", stdin);

    int N,num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        arr[num]++;
    }

    for(int i=0; i<=10000; i++){
        if(arr[i] == 0) continue;
        else {
            for(int j=0; j<arr[i]; j++){
                cout << i << '\n';
            }
        }
    }

    return 0;
}