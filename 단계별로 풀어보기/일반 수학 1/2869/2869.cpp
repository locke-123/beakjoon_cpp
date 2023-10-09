#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);
    long long A, B, V;
    int current = 0;
    int day = 0;

    cin >> A >> B >> V;

    V -= A;
    day++;

    day += V/(A-B);
    if(V%(A-B) > 0) {
        day++;
    }

    cout << day;

    return 0;
}