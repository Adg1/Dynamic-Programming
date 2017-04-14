#include<iostream>
#include<string>

using namespace std;
int dp[105][105];
int editDistance(string &s1,string &s2,int n,int m){
        if(n==-1) return m+1;
        if(m==-1) return n+1;
        if(s1[n]==s2[m]) return editDistance(s1,s2,n-1,m-1);
        return 1 + min(editDistance(s1,s2,n,m-1),min(editDistance(s1,s2,n-1,m),editDistance(s1,s2,n-1,m-1)));
}
int main(){
    int t,n,m,res;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>s1>>s2;
        for(int i=0;i<=n;i++){
            for (int j=0;j<=m;j++){
               dp[n][m]=-1;
            }
        }
        cout<<editDistance(s1,s2,n-1,m-1)<<endl;
    }
}
