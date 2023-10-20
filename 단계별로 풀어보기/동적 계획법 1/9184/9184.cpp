#include <iostream>
#include <vector>
using namespace std;
vector<int> tmp2(102);
vector<vector<int>> tmp(102,tmp2);
vector<vector<vector<int>>> arr(102,tmp);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); //51 51 71
    for(int a=0; a<=100; a++){
        for(int b=0; b<=100; b++){
            for(int c=0; c<=100; c++){
                if(a <= 50 || b <= 50 || c <= 50){
                    arr[a][b][c] = 1;
                    continue;
                }
                if(a > 70 || b > 70 || c > 70){
                    arr[a][b][c] = 1048576;
                    continue;
                }
                if(a < b && b < c){
                    arr[a][b][c] = arr[a][b][c-1] + arr[a][b-1][c-1] - arr[a][b-1][c];
                    continue;
                }
                arr[a][b][c] = arr[a-1][b][c] + arr[a-1][b-1][c] + arr[a-1][b][c-1] - arr[a-1][b-1][c-1];
            }
        }
    }
    //freopen("i.txt", "r", stdin);
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        cout << "w(" << a <<", " << b << ", " << c << ") = " << arr[a+50][b+50][c+50] << '\n';
    }

    return 0;
}