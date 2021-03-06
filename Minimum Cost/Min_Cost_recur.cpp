#include<iostream>
#include<climits>
using namespace std;
int arr[100][100],y;

//int min_cost(int i, int j){
//    if(i==0 && j==0) return arr[i][j];
//    if(i==0) return min_cost(i,j-1) + arr[i][j];
//    if(j==0) return min_cost(i-1,j) + arr[i][j];
//    else return min(min(min_cost(i-1,j),min_cost(i,j-1)),min_cost(i-1,j-1))+ arr[i][j];
//}
int min_cost(int i, int j){
    //y++;
    if(i<0 || j<0) return INT_MAX;
    if (i == 0 && j == 0) return arr[i][j];
    else return min(min(min_cost(i-1,j),min_cost(i,j-1)),min_cost(i-1,j-1))+ arr[i][j];
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    cout<<min_cost(n-1,m-1);
    //cout<<endl<<y;
}
/*
3 3
1 2 3 4 8 2 1 5 3
*/

