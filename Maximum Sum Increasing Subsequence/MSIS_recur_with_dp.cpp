#include<iostream>
#include<climits>
using namespace std;
int arr[100] , dp[100]={NULL},y;
int _MSIS(int i ,int &maxGlobalSum){
    //y++;
    if(dp[i]!=NULL) return dp[i];
    int maxSum = arr[i];
    if(i==0) maxSum = arr[i];
    else{
        for(int j=0;j<i;j++){
            int curSum = _MSIS(j , maxGlobalSum);
            if(arr[i]>arr[j]) maxSum = max(maxSum , curSum + arr[i]);
        }
    }
    if(maxSum > maxGlobalSum) maxGlobalSum = maxSum;
    return dp[i] = maxSum ;
}
int MSIS(int i){
    int maxGlobalSum = arr[i];
    _MSIS(i , maxGlobalSum);
    return maxGlobalSum;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MSIS(n-1);
    //cout<<endl<<y;
}

/*
7
1 101 2 3 100 4 5
*/
