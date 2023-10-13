#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> pArr(10000001,0);
vector<int> mArr(10000001,0);
int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        if(num >= 0){
            pArr[num]++;
        } else {
            mArr[abs(num)]++;
        }
    }

    cin >> M;

    for(int i=0; i<M; i++){
        int target;
        cin >> target;
        if(target >= 0){
            cout << pArr[target] << " ";
        } else {
            cout << mArr[abs(target)] << " ";
        }
    }

    return 0;
}