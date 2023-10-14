#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<bool> arr(1000003, true);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    for(int i=2; i*i<=1000000; i++){
        if(arr[i]){
            for(int j=i*i; j<=1000000; j+=i){
                arr[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        int count = 0;
        for(int j=2; j<=num/2; j++){
            if(arr[j] && arr[num-j]){
                count++;
            }
        }
        cout << count << '\n';
    }

    return 0;
}