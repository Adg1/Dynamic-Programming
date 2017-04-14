#include<iostream>
#include<climits>
using namespace std;
int arr[100],y;
int _MSIS(int i ,int &maxGlobalSum){
    //y++;
    int maxSum = arr[i];
    if(i==0) maxSum = arr[i];
    else{
        for(int j=0;j<i;j++){
            int curSum = _MSIS(j , maxGlobalSum);
            if(arr[i]>arr[j]) maxSum = max(maxSum , curSum + arr[i]);
        }
    }
    if(maxSum > maxGlobalSum) maxGlobalSum = maxSum;
    return maxSum ;
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

24
5 8 42 8 9 71 5 5 1 54 4 6 9 74 2 3 4 7 8 1 2 5 4 3
200
8388608
*/
