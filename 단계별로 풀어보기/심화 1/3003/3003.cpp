#include <iostream>
#include <vector>

using namespace std;

vector<int> black_arr = {1,1,2,2,2,8};

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    vector<int> white_arr;
    for(int i=0; i<6; i++){
        cin >> n;
        cout << black_arr[i]-n << " ";
    }

    return 0;
}