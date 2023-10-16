#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> v;
deque<int> d;
int main(){
    freopen("i.txt", "r", stdin);
    int N, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        d.push_back(num);
    }
    while (d.size() != 0)
    {
        num = d.front();
        d.pop_front();
        if(num > 0){
            for(int i=0; i<num; i++){
                d.push_back(d.front());
                d.pop_front();
            }
        } else {
            for(int i=0; i>num; i--){
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    

    return 0;
}