// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	int result = 1,platform = 1,i=1,j=0;
	sort(arr,arr+n);
	sort(dep,dep+n);
	
	while(i<n && j<n){
	    if(arr[i]<=dep[j]){
	        platform++;
	        i++;
	    }else if(arr[i]>dep[j]){
	        platform--;
	        j++;
	    }
	    if(platform > result){
	        result = platform;
	    }
	}
	return result;
}
s