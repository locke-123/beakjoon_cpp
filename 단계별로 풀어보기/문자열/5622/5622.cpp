#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> value_array = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

int main(){
    //freopen("i.txt", "r", stdin);
    int result = 0;
    vector<char> array;
    char c;
    while (cin >> c) {
        array.push_back(c);
    }

    int sum = 0;

    for(int i=0; i<array.size(); i++){
        sum += value_array[array[i]-'A'];
    }

    cout << sum;
    


    return 0;
}