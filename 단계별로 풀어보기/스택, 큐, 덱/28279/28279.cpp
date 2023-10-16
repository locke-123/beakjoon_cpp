#include <iostream>
#include <deque>
using namespace std;
deque<int> d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int N, o, num;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> o;
        if(o == 1){
            cin >> num;
            d.push_front(num);
        } else if(o == 2){
            cin >> num;
            d.push_back(num);
        } else if(o == 3){
            if(d.empty()){
                cout << -1 << '\n';
            } else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        } else if(o == 4){
            if(d.empty()){
                cout << -1 << '\n';
            } else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        } else if(o == 5){
            cout << d.size() << '\n';
        } else if(o == 6){
            if(d.empty()){
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if(o == 7){
            if(d.empty()){
                cout << -1 << '\n';
            } else {
                cout << d.front() << '\n';
            }
        } else if(o == 8){
            if(d.empty()){
                cout << -1 << '\n';
            } else {
                cout << d.back() << '\n';
            }
        }
    }

    return 0;
}