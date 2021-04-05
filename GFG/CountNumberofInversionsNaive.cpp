#include<bits/stdc++.h>
using namespace std;
//a naive brute force approach to count the number of inversions in an array take the element and compare it will all the elements to the right of that elememt. 
//The time complexity of such a solution is O(n^2)

int solve(int arr[], int n){
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {4,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}