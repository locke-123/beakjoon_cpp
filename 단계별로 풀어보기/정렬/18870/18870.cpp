#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> origin;

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        origin.push_back(num);
    }
    vector<int> arr(origin);
    sort(arr.begin(),arr.end());

    arr.erase(unique(arr.begin(),arr.end()),arr.end());

    for(int i=0; i<N; i++){
        auto it = lower_bound(arr.begin(), arr.end(), origin[i]);
        cout << it - arr.begin() << " ";
    }
    return 0;
}