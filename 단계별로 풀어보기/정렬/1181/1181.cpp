#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> arr;

bool comp(string a, string b){
    if(a.length() == b.length()){
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]){
                return a[i] < b[i];
            }
        }
    } else {
        return a.length() < b.length();
    }
}

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        bool flag = true;
        cin >> s;
        for(int j=0; j<arr.size(); j++){
            if(s == arr[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            arr.push_back(s);
        }
    }

    sort(arr.begin(),arr.end(), comp);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << '\n';
    }

    return 0;
}