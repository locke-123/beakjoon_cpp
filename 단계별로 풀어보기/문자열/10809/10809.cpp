#include <iostream>
#include <vector>

using namespace std;
// 26
int main(){
    // freopen("i.txt", "r", stdin);
    vector<int> arr(26, -1);
    string S;
    
    cin >> S;
    for(int i=0; i<S.length(); i++){
        if(arr[static_cast<int>(S[i])-97] == -1) {
            arr[static_cast<int>(S[i])-97] = i;
        }
        // cout << static_cast<int>(S[i])-97 << " ";
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}