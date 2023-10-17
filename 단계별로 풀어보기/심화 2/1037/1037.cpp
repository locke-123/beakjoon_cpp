#include <iostream>
#include <algorithm>
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
    sort(arr.begin(), arr.end());
    if(arr.size()%2 == 0){
        cout << arr[0]*arr[arr.size()-1];
    } else {
        cout << arr[arr.size()/2]*arr[arr.size()/2];
    }

    return 0;
}