#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Point {
    int x;
    int y;
};

bool comp(Point a, Point b){
    if(a.x == b.x){
        return a.y < b.y;
    } else {
        return a.x < b.x;
    }
}

vector<Point> arr;

int main(){
    //freopen("i.txt", "r", stdin);

    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        Point po;
        cin >> po.x >> po.y;
        arr.push_back(po);
    }

    sort(arr.begin(), arr.end(), comp);

    for(int i=0;i<N;i++){
        cout << arr[i].x << " " << arr[i].y << '\n';
    }

    return 0;
}