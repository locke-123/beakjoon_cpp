#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, M;
    cin >> N;
    vector<int> myArr(N);
    for(int i=0; i<N; i++){
        cin >> myArr[i];
    }
    sort(myArr.begin(), myArr.end());
    cin >> M;
    for(int i=0; i<M; i++){
        int target;
        cin >> target;
        if(binary_search(myArr.begin(), myArr.end(), target)){
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

    return 0;
}