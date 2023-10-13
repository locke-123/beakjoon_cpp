#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
vector<bool> used(10, false);
int N, M;
void bt(int num){
    if(arr.size() == M) {
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    } else {
        for(int i=1; i<=N; i++){
            if(!used[i]){
                arr.push_back(i);
                used[i] = true;
                bt(num++);
                arr.pop_back();
                used[i] = false;
            }
        }
    }
}

int main(){
    freopen("i.txt", "r", stdin);

    cin >> N >> M;

    bt(0);

    return 0;
}