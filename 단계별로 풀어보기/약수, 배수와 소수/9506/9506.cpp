#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int num;
    while (true)
    {
        cin >> num;
        if(num == -1) break;
        vector<int> arr;
        arr.push_back(1);
        for(int i=2; i<=num/2; i++){
            if(num%i == 0){
                if(i > num/i) {
                    break;
                } else if(i == num/i) {
                    arr.push_back(i);
                } else {
                    arr.push_back(i);
                    arr.push_back(num/i);
                }
            }
        }
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        if(num == sum) {
            sort(arr.begin(), arr.end());
            cout << num << " = ";
            for(int i=0; i<arr.size(); i++){
                if(i == arr.size()-1) {
                    cout << arr[i];
                } else {
                    cout << arr[i] << " + ";
                }
            }
        } else {
            cout << num << " is NOT perfect.";
        }
        cout << endl;
    }
    

    return 0;
}