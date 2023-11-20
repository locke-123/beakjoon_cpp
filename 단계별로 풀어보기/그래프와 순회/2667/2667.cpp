#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    freopen("i.txt", "r", stdin);
    int N;
    cin >> N;
    vector<int> tmp(N,0);
    vector<vector<int>> arr(N, tmp);
    vector<vector<int>> vis(N, tmp);
    
    int num;
    string s;
    for(int i=0; i<N; i++){
        cin >> s;
        for( int j=0; j<N; j++){
            int a = s[j] - '0';
            arr[i][j] = a;
        }
    }

    for(int i=0; i<N; i++){
        for( int j=0; j<N; j++){
            cout << arr[i][j];
        } cout << endl;
    }

    vector<vector<int>> m = {{-1,0}, {0,1}, {1,0}, {0,-1}};
    vector<int> res;
    for(int i=0; i<N; i++){
        for( int j=0; j<N; j++){
            if(arr[i][j] == 0 || vis[i][j] == 1){
                continue;
            }
            vector<int> temp = {i,j};
            queue<vector<int>> q;
            q.push(temp);
            int count = 0;
            while(q.empty() == 0){
                vector<int> l = q.front();
                q.pop();
                int y = l[0];
                int x = l[1];
                if(vis[y][x] == 1){
                    continue;
                }
                vis[y][x] = 1;
                count++;
                for(int k = 0; k<4; k++){
                    int my = y + m[k][0];
                    int mx = x + m[k][1];
                    if(my < 0 || my > N-1 || mx < 0 || mx > N-1){
                        continue;
                    }
                    if(arr[my][mx] == 0 || vis[my][mx] == 1){
                        continue;
                    }
                    vector<int> newq = {i,j};
                    q.push(newq);
                }
            }
            res.push_back(count);
        }
    }

    for(int u; u<res.size(); u++){
        cout << res[u];
    }

    return 0;
}