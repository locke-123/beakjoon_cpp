#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    int result = 0;
    vector<char> array;
    char c;
    while (cin >> c) {
        array.push_back(c);
    }

    for(int i=0; i<array.size(); i++){
        cout << array[i] << " " << array[i]-'A' << endl;
    }
    


    return 0;
}