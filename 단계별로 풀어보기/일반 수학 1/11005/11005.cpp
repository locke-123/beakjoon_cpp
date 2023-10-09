#include <iostream>
#include <vector>
using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int num, B;
    vector<int> arr;
    cin >> num >> B;

    while (num >= B)
    {
        arr.push_back(num%B);
        num /= B;
    }
    arr.push_back(num);

    for(int i=arr.size()-1; i>=0; i--){
        if(arr[i] >= 10) {
            cout << static_cast<char>(arr[i]+55);
        } else {
            cout << to_string(arr[i]);
        }
    }
    return 0;
}