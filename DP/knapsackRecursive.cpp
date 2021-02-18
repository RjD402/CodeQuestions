#include<bits/stdc++.h>
using namespace std;

int solve(int W,int n,int wt[],int val[]){
    if(W==0 || n==0)
        return 0;
    if(wt[n-1]>W)
        return solve(W,n-1,wt,val);
    else
    {
        return max(val[n-1]+solve(W-wt[n-1],n-1,wt,val),
        solve(W,n-1,wt,val));
    }
    
}

int main(){
    int W = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<solve(W,n,wt,val)<<endl;
    return 0;
}