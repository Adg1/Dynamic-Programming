#include<iostream>
#include<climits>
using namespace std;
int arr[100][100],dp[100][100]={NULL};
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0)    dp[i][j] = arr[i][j];
            else if(i==0)       dp[i][j] = arr[i][j] + dp[i][j-1];
            else if(j==0)       dp[i][j] = arr[i][j] + dp[i-1][j];
            else                dp[i][j] = arr[i][j] + min(min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
        }
    }
    cout<<dp[n-1][m-1]<<endl;
}
/*
3 3
1 2 3 4 8 2 1 5 3
*/
