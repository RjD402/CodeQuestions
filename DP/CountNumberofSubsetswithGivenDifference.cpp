#include<bits/stdc++.h>
using namespace std;
//given an int array and a difference. Count the number of ways of creating subsets that give the given difference
int countSubsetSum(int arr[],int target, int n){
    int t[n+1][target+1];
    for(int i=0;i<=target;i++){
        t[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        t[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(arr[i-1]>j)
                t[i][j] = t[i-1][j];
            else
            {
                t[i][j] = t[i-1][j]+t[i-1][j-arr[i-1]];
            }
            
        }
    }
    return t[n][target];
}

int main(){
    int arr[]={1,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int diff = 1;

    int sum = 0;
    for(auto x: arr)
        sum+=x;
    
    //since s1+s2 = sum
    //s1-s2 = diff
    //2s1 = sum+diff
    //thus (target) s1 = (sum+diff)/2;
    
    int target = (diff+sum)/2;

    //now we just need to find the number of subarrays having sum equal to target. Similar to count subset sum problem

    cout<<countSubsetSum(arr,target,n)<<endl;
    return 0;
}
