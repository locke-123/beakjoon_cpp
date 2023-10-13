#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    vector<int> arr(5,0);
    int sum = 0;
    for(int i=0;i<5;i++){
        int num;
        cin >> num;
        arr[i] = num;
        sum += num;
    }
    sort(arr.begin(),arr.end());
    cout << sum/5 << endl;
    cout << arr[2];

    return 0;
}