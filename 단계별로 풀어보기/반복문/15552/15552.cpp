#include <iostream>
#include <ios>

using namespace std;

int main(){
    // freopen("i.txt", "r", stdin);
    cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int A, B;
        cin >> A >> B;
        cout << A + B << "\n";
    }


    return 0;
}