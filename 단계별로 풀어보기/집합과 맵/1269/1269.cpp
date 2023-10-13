#include <iostream>
#include <set>
using namespace std;
set<int> mySet;
int main(){
    //freopen("i.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int A, B, num;
    cin >> A >> B;
    for(int i=0; i<A; i++){
        cin >> num;
        mySet.insert(num);
    }
    for(int i=0; i<B; i++){
        cin >> num;
        auto it = mySet.find(num);
        if(it == mySet.end()){
            mySet.insert(num);
        } else {
            mySet.erase(num);
        }
    }

    cout << mySet.size();

    return 0;
}