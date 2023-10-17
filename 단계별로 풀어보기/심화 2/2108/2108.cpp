#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> c;
vector<int> pcount(4001,0);
vector<int> mcount(4001,0);
vector<int> arr;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, num;
    int max, min;
    int sum = 0;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        sum += num;
        arr.push_back(num);
        if(i == 0){
            max = num;
            min = num;
        } else {
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
        }
        if(num >= 0){
            pcount[num]++;
        } else {
            mcount[abs(num)]++;
        }
    }
    int cmax = -1;
    for(int i=0; i<pcount.size(); i++){
        if(pcount[i] > cmax){
            cmax = pcount[i];
        }
    }
    for(int i=0; i<mcount.size(); i++){
        if(mcount[i] > cmax){
            cmax = mcount[i];
        }
    }
    for(int i=0; i<pcount.size(); i++){
        if(pcount[i] == cmax){
            c.push_back(i);
        }
    }
    for(int i=0; i<mcount.size(); i++){
        if(mcount[i] == cmax){
            c.push_back(-1 * i);
        }
    }
    int most;
    if(c.size() > 1){
        sort(c.begin(), c.end());
        most = c[1];
    } else {
        most = c[0];
    }
    int average;
    if(sum >= 0){
        double psum = sum;
        average = round(psum/N);
    } else {
        double dsum = sum;
        average = round(dsum/N);
    }
    
    sort(arr.begin(), arr.end());
    cout << average << '\n' << arr[arr.size()/2] << '\n' << most << '\n' << max-min ;

    return 0;
}