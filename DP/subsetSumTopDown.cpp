#include<bits/stdc++.h>
using namespace std;
//top down memoization solution of subset sum problem

//creating a dp array according to the size of question constrains t[n+1][sum+1]; where n = number of items in the array
int t[102][102];

int solve(int arr[],int sum,int n){
    //if already solved then return the answer
    if(t[n][sum]!=-1)
    return t[n][sum];

    //we can always make zero sum from empty set hence return true
    if(sum==0)
    return t[n][sum]=1;

    //if no items are present in set then no sum can be made except for 0 which already taken care above else for any other sum return zero
    if(n==0)
    return t[n][sum]=0;
    
    //if the value of item in array is greater than the sum we want then we just skip the item
    if(arr[n-1]>sum){
        return t[n][sum]=solve(arr,sum,n-1);
    }else{
        //we use or because if any one is true we will include it in aswer that yes it is possible to create a subset of such a sum
        return t[n][sum]=solve(arr, sum-arr[n-1],n-1)||solve(arr, sum, n-1);
    }

    //return the final answer that if it is possible to get "sum" using all the items of array
    return t[n][sum];
}
int main(){
    memset(t,-1,sizeof(t));
    int arr[] = {3, 34, 4, 12, 4, 5};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr, sum, n);
    return 0;
}