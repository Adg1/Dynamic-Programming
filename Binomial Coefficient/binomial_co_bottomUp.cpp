#include<iostream>

using namespace std;
int dp[1000][1000];
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
        }
    }
    cout<<dp[n][k]<<endl;
}
