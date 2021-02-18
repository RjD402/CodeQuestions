#include<bits/stdc++.h>
using namespace std;

//Given an array an a sum. Find if there exists a subset in the array with the given sum

int solve(int arr[],int sum,int n){
    if(sum==0)
    return 1;
    if(n==0)
    return 0;
    if(arr[n-1]>sum){
        return solve(arr,sum,n-1);
    }else{
        return solve(arr, sum-arr[n-1],n-1)||solve(arr, sum, n-1);
    }
}
int main(){
    int arr[] = {3, 34, 4, 12, 4, 0};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr, sum, n);
    return 0;
}
