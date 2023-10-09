#include <iostream>
#include <vector>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int N, K;
    cin >> N >> K;

    int target = 1;
    vector<int> arr;
    while (target <= N)
    {
        if(N%target == 0){
            arr.push_back(target);
        }
        if(arr.size() == K){
            break;
        }
        target++;
    }

    if(arr.size() < K) {
        cout << 0;
    } else {
        cout << arr[K-1];
    }
    

    return 0;
}