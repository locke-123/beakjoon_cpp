#include <iostream>
#include <vector>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        vector<char> arr;
        int R;
        cin >> R;
        string S;
        cin >> S;

        for(int j=0; j<S.length(); j++){
            for(int k=0; k<R; k++){
                arr.push_back(S[j]);
            }
        }
        
        for(int j=0; j<arr.size(); j++){
            cout << arr[j];
        }
        cout << endl;
    }

    return 0;
}