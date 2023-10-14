#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int gcd;
    int num;
    for(int i=0; i<N; i++){
        cin >> num;
        if(i == 0){
            arr.push_back(num);
            continue;
        }
        if(i == 1){
            arr.push_back(num);
            gcd = num-arr[i-1];
            continue;
        }
        arr.push_back(num);
        gcd = __gcd(gcd, num-arr[i-1]);
    }

    int count = 0;
    for(int i=arr[0]; i<=arr[arr.size()-1]; i=i+gcd){
        count++;
    }
    cout << count - arr.size();

    return 0;
}