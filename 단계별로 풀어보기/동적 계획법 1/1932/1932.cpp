#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> arr;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    int maxnum = -1;
    for(int i=0; i<N; i++){ // 줄
        for(int j=0; j<=i; j++){ // 각 줄 숫자
            cin >> num;
            if(i == 0){
                arr.push_back(num);
            } else {
                if(j == 0){
                    arr.push_back(arr[arr.size()-i]+num);
                } else if(j == i){
                    arr.push_back(arr[arr.size()-i-1]+num);
                } else {
                    if(arr[arr.size()-i] > arr[arr.size()-i-1]){
                        arr.push_back(arr[arr.size()-i]+num);
                    } else {
                        arr.push_back(arr[arr.size()-i-1]+num);
                    }
                }
            }
            if(maxnum < arr[arr.size()-1]){
                maxnum = arr[arr.size()-1];
            }
        }
    }
    cout << maxnum;
    // for(int a:arr){
    //     cout << a << ' ';
    // }

    return 0;
}