#include<iostream>
#include<climits>
using namespace std;
int dp[1003];
int _lis(int arr[], int n, int *max_lis_length)
{
    if(dp[n]!=-1) return dp[n];
    if (n == 0) return dp[n]=1;
    int current_lis_length = 1;
    for (int i=n-1; i>=0; i--) {
        int subproblem_lis_length = _lis(arr, i, max_lis_length);
        if (arr[i] < arr[n] ) current_lis_length = max(current_lis_length,1+subproblem_lis_length);
    }
    if (*max_lis_length < current_lis_length) *max_lis_length = current_lis_length;
    dp[n]=current_lis_length;
    return dp[n];
}

int lis(int arr[], int n) {
    int max_lis_length = 1;
    _lis( arr, n, &max_lis_length );
    return max_lis_length;
}
int main(){
    int n,t ;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) dp[i]=-1;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        cout<<lis(arr,n-1)<<endl;
        for(int i=0;i<n;i++) cout<<endl<<dp[i]<<" ";
    }
}
