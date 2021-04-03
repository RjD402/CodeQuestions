//find the number of times a sorted array is rotated.
// the solution is equal to the index of the minimum element
//we use binary search to find the minimum element
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    int start = 0, end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int prev = (mid-1+n)%n, next = (mid+1)%n;
        //the minimum element is smaller than both its neighbours
        if(arr[mid]<next && arr[mid]<prev)
        return mid;
        //the smallest element lies in unsorted array
        //if mid is greater than start than start till mid part is sorted, thus move to righ of mid
        else if(arr[mid]>arr[start]){
            start = mid+1;
            //else move to left of mid
        }else{
            end = mid-1;
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,8,1,2,3};
    //answer is 5
    cout<<solve(arr, sizeof(arr)/sizeof(arr[0]))<<endl;
    return 0;
}