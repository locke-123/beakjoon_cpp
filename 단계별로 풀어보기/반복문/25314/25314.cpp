#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    string result;
    for(int i=0; i<(N/4); i++) {
        result = result + "long ";
    }
    result = result + "int";

    cout << result;

    return 0;
}