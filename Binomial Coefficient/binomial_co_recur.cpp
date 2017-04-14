#include<iostream>

using namespace std;
int y;
int bin_coeff(int n, int k){
    //y++;
    if(k==0 || k==n) return 1;
    return bin_coeff(n-1,k-1)+bin_coeff(n-1,k);
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<bin_coeff(n,k);
    //cout<<" "<<y;
}
