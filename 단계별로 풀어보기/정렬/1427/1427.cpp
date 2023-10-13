#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;

bool comp(int a, int b){
    return a>b;
}

int main(){
    //freopen("i.txt", "r", stdin);

    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        arr.push_back(s[i]-'0');
    }
    sort(arr.begin(), arr.end(), comp);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i];
    }


    return 0;
}