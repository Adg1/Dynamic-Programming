#include<iostream>
#include<climits>
using namespace std;
int arr[100] , dp[100]={NULL};
int main(){
    int n,maxx = INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) dp[i] = arr[i];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]) dp[i] = max(dp[i],dp[j]+arr[i]);
        }
        maxx = max(maxx,dp[i]);
    }
    cout<<maxx<<endl;
}

/*
7
1 101 2 3 100 4 5

24
5 8 42 8 9 71 5 5 1 54 4 6 9 74 2 3 4 7 8 1 2 5 4 3
200
8388608
*/
