#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
int main(){
    //freopen("i.txt", "r", stdin);

    int N,num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<N; i++){
        cout << arr[i] << '\n';
    }

    return 0;
}