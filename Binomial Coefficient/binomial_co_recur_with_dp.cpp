#include<iostream>

using namespace std;
int dp[1000][1000]={NULL},y;
int bin_coeff(int n, int k){
    //y++;
    if(dp[n][k] != NULL ) return dp[n][k];
    if(k==0 || k==n) return dp[n][k] =  1;
    return dp[n][k] = bin_coeff(n-1,k-1)+bin_coeff(n-1,k);
}
int main(){
    //y=0;
    int n,k;
    cin>>n>>k;
    cout<<bin_coeff(n,k);

    //cout<<" "<<y;
}
