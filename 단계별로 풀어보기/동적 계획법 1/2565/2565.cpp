#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct LINE {
    int A;
    int B;
};

bool comp(LINE a, LINE b){
    return a.A < b.A;
}

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    vector<LINE> arr;
    for(int i=0; i<N; i++){
        LINE l;
        cin >> l.A >> l.B;
        arr.push_back(l);
    }
    sort(arr.begin(), arr.end(), comp);
    // for(LINE l:arr){
    //     cout << l.B << ' ';
    // }
    vector<int> memo(arr.size());
    memo[0] = 1;
    for(int i=1; i<arr.size(); i++){
        int maxI = -1;
        for(int j=0; j<i; j++){
            if(arr[i].B > arr[j].B){
                maxI = max(maxI, memo[j]);
            }
        }
        if(maxI == -1){
            memo[i] = 1;
        } else {
            memo[i] = maxI+1;
        }
    }
    int res = -1;
    for(int num:memo){
        //cout << num << ' ';
        if(res < num){
            res = num;
        }
    }
    cout << N-res;
    return 0;
}


// 8 2 9 1 4 6 7 10