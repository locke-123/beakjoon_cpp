#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int count = 0;
void merge(vector<int>&arr, int p, int q, int r);

void merge_sort(vector<int> &arr, int p, int r){
    if(p < r){
        int q = (p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

void merge(vector<int>&arr, int p, int q, int r){
    int i = p; int j = q+1; int t = p;
    vector<int> tmp(arr);
    while (i<=q && j<=r){
        if(tmp[i] <= tmp[j]){
            arr[t] = tmp[i];
            t++; i++;
            
        } else {
            arr[t] = tmp[j]; t++; j++;
            for(int num:arr){
                cout << num << ' ';
            } cout << '\n';
        }
    }
    while (i <= q)
    {
        arr[t] = tmp[i]; t++; i++;
        for(int num:arr){
            cout << num << ' ';
        } cout << '\n';
    }
    while (j <= r)
    {
        arr[t] = tmp[j]; t++; j++;
        for(int num:arr){
            cout << num << ' ';
        } cout << '\n';
    }
}


int main(){
    freopen("i.txt", "r", stdin);
    int N, K, num;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);
    }
    merge_sort(arr,0,arr.size()-1);
    for(int num:arr){
        cout << num << ' ';
    }

    return 0;
}