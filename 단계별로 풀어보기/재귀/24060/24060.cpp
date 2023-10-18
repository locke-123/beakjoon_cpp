#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int count = 0;
int res = -1;
int K;
void merge(vector<int>&arr, int p, int q, int r, int K);

void merge_sort(vector<int> &arr, int p, int r){
    if(p < r){
        int q = (p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r, K);
    }
}

void merge(vector<int>&arr, int p, int q, int r, int K){
    int i = p; int j = q+1; int t = p;
    int tmp[arr.size()];
    while (i<=q && j<=r){
        if(arr[i] <= arr[j]){
            tmp[t] = arr[i];
            t++; i++;
        } else {
            tmp[t] = arr[j];
            t++; j++;
        }
    }
    while (i <= q)
    {
        tmp[t] = arr[i];
        t++; i++;
    }
    while (j <= r)
    {
        tmp[t] = arr[j];
        t++; j++;
    }
    i = p;
    while (i <= r)
    {
        count++;
        if(count == K){
            res = tmp[i];
        }
        arr[i] = tmp[i];
        i++;
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N >> K;
    for(int i=0; i<N; i++){
        cin >> num;
        arr.push_back(num);
    }
    merge_sort(arr,0,arr.size()-1);
    // for(int num:arr){
    //     cout << num << ' ';
    // }
    cout << res;

    return 0;
}