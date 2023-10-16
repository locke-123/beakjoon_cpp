#include <iostream>
int dp[31][31];
using namespace std;
void dynamic(){
    for(int i=1; i<=30; i++){
        dp[1][i] = i;
    }
    for(int i=2; i<=30; i++){
        for(int j=i; j<=30; j++){
            if(i == j){
                dp[i][j] = 1;
            } else {
                long long num = 0;
                for(int k=j-1; k>=i-1; k--){
                    num += dp[i-1][k];
                }
                dp[i][j] = num;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //freopen("i.txt", "r", stdin);
    dynamic();
    int n, N, M;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> N >> M;
        cout << dp[N][M] << '\n';
    }
    return 0;
}