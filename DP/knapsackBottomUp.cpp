#include<bits/stdc++.h>
using namespace std;

int solve(int W,int n,int wt[],int val[]){
    int t[n+1][W+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            //when if there are either 0 items or bag size is zero then total we can get will be 0
            if(i==0||j==0)t[i][j]=0;

            //if the weight of ith item is greater than capacity of bag then we do not choose the item
            else if(wt[i-1]>j){
                t[i][j] = t[i-1][j];
            }else{
                //we take the max of two cases
                t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
        }
    }
    return t[n][W];
}

int main(){
    int W = 50;
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<solve(W,n,wt,val)<<endl;
    return 0;
}