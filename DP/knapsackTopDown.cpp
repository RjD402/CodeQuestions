#include<bits/stdc++.h>
using namespace std;

//top down version of knapsack problem aka Memoization

//the maximimum size can be taken according to the given constraints if n<=100 and W<=100 is given then
int t[102][102];

int solve(int W,int n,int wt[],int val[]){
    if(t[n][W]!=-1)
        return t[n][W];
    if(W==0 || n==0)
        return t[n][W]=0;
    if(wt[n-1]>W)
        return t[n][W]=solve(W,n-1,wt,val);
    else
    {
        return t[n][W]=max(val[n-1]+solve(W-wt[n-1],n-1,wt,val),
        solve(W,n-1,wt,val));
    }
    
}

int main(){
    memset(t,-1,sizeof(t));
    int W = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<solve(W,n,wt,val)<<endl;
    // for(int i=0;i<=3;i++){
    //     for(int j=0;j<=50;j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}