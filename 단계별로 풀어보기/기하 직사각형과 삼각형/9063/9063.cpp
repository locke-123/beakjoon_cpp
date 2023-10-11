#include <iostream>

using namespace std;

int main(){
    //freopen("i.txt", "r", stdin);

    int x,y;
    int maxX = -10001;
    int minX = 10001;
    int maxY = -10001;
    int minY = 10001;

    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        maxX = max(x,maxX);
        minX = min(x,minX);
        maxY = max(y,maxY);
        minY = min(y,minY);
    }

    cout << (maxX-minX)*(maxY-minY);

    return 0;
}