#include <iostream>

using namespace std;
int count;

int isPal(string &s, int first, int last){
    count++;
    if(first >= last){
        return 1;
    } else if(s[first] != s[last]){
        return 0;
    } else {
        return isPal(s,first+1,last-1);
    }
}

int main(){
    //freopen("i.txt", "r", stdin);
    int n;
    cin >> n;
    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        count = 0;
        cout << isPal(s, 0, s.length()-1);
        cout << ' ' << count << '\n';
    }

    return 0;
}