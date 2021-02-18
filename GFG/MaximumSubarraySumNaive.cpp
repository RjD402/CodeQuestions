#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/maximum-subarray-sum-using-divide-and-conquer-algorithm/
//ans = 7
int subarraySum(int arr[], int n){
    int sum =INT_MIN, maxi=INT_MIN;

    //running two loops the TC is O(n*n)
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>maxi){
                maxi=sum;
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}

int main(){
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarraySum(arr,n);
    return 0;
}