#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N, k;
    cin >> N >> k;
    vector<int> arr;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());

    cout << arr[N-k];

    return 0;
}