#include <iostream>
#include <vector>
using namespace std;

vector<int> R; //R 선택시 최소 값
vector<int> G;
vector<int> B;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    int n, r,g,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> r >> g >> b;
        if(i == 0){
            R.push_back(r);
            B.push_back(b);
            G.push_back(g);
        } else {
            R.push_back(min(B[i-1]+r,G[i-1]+r));
            B.push_back(min(R[i-1]+b,G[i-1]+b));
            G.push_back(min(R[i-1]+g,B[i-1]+g));
        }
    }
    cout << min(min(R[n-1],G[n-1]),B[n-1]);

    return 0;
}