#include <iostream>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    int result = 0;
    for(int i=1; i<=N; i++){
        result = result + i;
    }
    cout << result;

    return 0;
}