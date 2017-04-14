#include<iostream>
#include<climits>
using namespace std;
int arr[100],n,y;
int WCC(int i,int sum){
    y++;
    if(sum==0)  return 1;
    if(sum<0)   return 0;
    if(i<0 && sum >= 1) return 0;
    else return WCC(i,sum-arr[i])+WCC(i-1,sum);
}
int main(){
    int sum;
    cin>>sum>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<WCC(n-1,sum);
    cout<<endl<<y;
}


/*
4 3
1 2 3
*/
