#include <iostream>
#include <map>
using namespace std;

map<char, int> alMap;

int main(){
    //freopen("i.txt", "r", stdin);

    string input;
    cin >> input;

    int max = 0;
    char result = '?';

    for(int i=0; i<input.length(); i++){
        if(alMap.find(toupper(input[i])) == alMap.end()) {
            alMap[toupper(input[i])] = 1;
            if(alMap[toupper(input[i])] > max) {
                max = 1;
                result = toupper(input[i]);
            } else if(alMap[toupper(input[i])] == max) {
                result = '?';
            }
        } else {
            alMap[toupper(input[i])]++;
            if(alMap[toupper(input[i])] > max) {
                max = alMap[toupper(input[i])];
                result = toupper(input[i]);
            } else if(alMap[toupper(input[i])] == max) {
                result = '?';
            }
        }
    }

    cout << result;

    return 0;
}