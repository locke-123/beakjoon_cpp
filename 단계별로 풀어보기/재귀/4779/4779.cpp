#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void kant(vector<char> &arr, int size, int first, int last){
    if(size == 0){
        return;
    }
    int a = pow(3, size-1);
    int b = pow(3, size);
    for(int i=first; i<=last; i++){
        if(i >= a+first && i < b-a+first){
            arr[i] = ' ';
        }
    }
    kant(arr,size-1,first,a-1+first);
    kant(arr,size-1,b-a+first,last);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int num;
    while (cin >> num)
    {
        int size = pow(3,num);
        vector<char> arr(size, '-');
        kant(arr, num, 0, size-1);
        for(char n:arr){
            cout << n;
        } cout << endl;
    }
    

    return 0;
}