#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> v;
vector<int> r;
deque<int> d;
int main(){
    //freopen("i.txt", "r", stdin);
    int N, num, move;
    cin >> N;
    for(int i=0; i<N; i++){
        d.push_back(i+1);
    }
    for(int i=0; i<N; i++){
        cin >> num;
        v.push_back(num);
    }
    while (d.size() != 0)
    {
        move = v[d.front()-1];
        r.push_back(d.front());
        d.pop_front();
        if(move > 0){
            move--;
            for(int i=0; i<move; i++){
                d.push_back(d.front());
                d.pop_front();
            }
        } else {
            for(int i=0; i>move; i--){
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }

    for(int num:r){
        cout << num << ' ';
    }
    

    return 0;
}