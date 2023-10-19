#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int cal[4];
int numMax;
int numMin;
bool isFirst = true;
// + - * /
vector<int>selectCal;
// 0 1 2 3
void bt(int n){
    if(arr.size()-1 == n){
        int res = arr[0];
        for(int i=0; i<selectCal.size(); i++){
            if(selectCal[i] == 0){
                res += arr[i+1];
            } else if(selectCal[i] == 1) {
                res -= arr[i+1];
            } else if(selectCal[i] == 2) {
                res *= arr[i+1];
            } else if(selectCal[i] == 3) {
                if(res < 0) {
                    res *= -1;
                    res /= arr[i+1];
                    res *= -1;
                } else{
                    res /= arr[i+1];
                }
            }
        }
        if(isFirst){
            numMax = res;
            numMin = res;
            isFirst = false;
        } else {
            if(res > numMax){
                numMax = res;
            }
            if(res < numMin){
                numMin = res;
            }
        }
        return;
    }
    for(int i=0; i<4; i++){
        if(cal[i] != 0){
            selectCal.push_back(i);
            cal[i]--;
            bt(n+1);
            selectCal.pop_back();
            cal[i]++;
        }
    }
}
int main(){
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);
    }
    for(int i=0; i<4; i++){
        cin >> num;
        cal[i] = num;
    }
    bt(0);
    cout << numMax << '\n' << numMin;


    return 0;
}