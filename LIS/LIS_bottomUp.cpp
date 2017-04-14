#include<iostream>
#include<climits>
using namespace std;
int dp[1003];
int main(){
    int n,t ;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) dp[i]=1;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[i]>arr[j]) dp[i]= max(dp[i],dp[j]+1);
            }
        }
        int max_lis_length = 1;
        for(int i=0;i<n;i++){
            max_lis_length = max(max_lis_length,dp[i]);
        }
        cout<<max_lis_length<<endl;
    }
}
