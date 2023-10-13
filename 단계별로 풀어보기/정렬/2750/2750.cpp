#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    vector<int> arr;
    cin >> N;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<N; i++){
        cout << arr[i] << endl;
    }

    return 0;
}