#include<iostream>
#include<string>

using namespace std;
int dp[105][105];
int main(){
    int t,n,m,res;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>s1>>s2;
        for(int i=0;i<=n;i++){
            for (int j=0;j<=m;j++){
               if(i==0) dp[i][j]=j;
               else if(j==0) dp[i][j]=i;
               else if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
               else dp[i][j] = 1 + min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
        }
        cout<<dp[n][m]<<endl;
    }
}

