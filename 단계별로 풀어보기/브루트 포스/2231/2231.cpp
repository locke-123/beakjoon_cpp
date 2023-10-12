#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    int N;
    int result = 0;
    cin >> N;
    for(int i=N-54; i<N; i++){
        string s = to_string(i);
        int sum = 0;
        for(int j=0; j<s.length(); j++){
            sum += static_cast<int>(s[j])-'0';
        }
        if(i+sum == N){
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}