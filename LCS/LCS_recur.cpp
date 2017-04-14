#include<iostream>
#include<string>

using namespace std;
int dp[105][105];
int LCS_recur(string &s1,string &s2,int n,int m){
    if(n==-1 || m==-1)  return 0;
    if(dp[n][m]!=-1)    return dp[n][m];
    if(s1[n]==s2[m])    return dp[n][m] = 1+LCS_recur(s1,s2,n-1,m-1);
    return dp[n][m] = max(LCS_recur(s1,s2,n-1,m),LCS_recur(s1,s2,n,m-1));
}
int main(){
    int t,n,m,res;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++) for (int j=0;j<m;j++) dp[i][j]=-1;
        cin>>s1>>s2;
        res = LCS_recur(s1,s2,n-1,m-1);
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<res<<endl;
    }
}
