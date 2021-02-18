#include<bits/stdc++.h>
using namespace std;
//O(n) approach to solve the equilibrium point problem

int solve(int arr[], int n){
    //find the total sum of the array
    int sum =0;
    for (size_t i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    

    //as you move across the array subract the value at i from total sum and see if leftsum and total sum are equal. If yes then its equilibrium point
    int leftsum =0;

    for(int i=0; i<n;i++){

        sum-=arr[i];
        //check for equilibrium 
        if(leftsum == sum)
        return i;
        //keep updating the left sum by adding current element to leftsum
        leftsum+=arr[i];
    }
    //return -1 is no such point exists.
    return -1;
}
int main(){
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr, n)<<endl;
    return 0;
}