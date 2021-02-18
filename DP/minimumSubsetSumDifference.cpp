#include<bits/stdc++.h>
using namespace std;

//dynamic programming solution to find the minimum difference between two subests of a given array
//built on the subset sum problem


void subsetsum(vector<int>nums, int n, int range){
    int t[n+1][range+1];
    for(int i=0;i<=range;i++){
        t[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        t[i][0]=1;
    }
    for(int i =1;i<=n;i++){
        for(int j=0;j<=range;j++){
            if(nums[i-1]>j)
            t[i][j] = t[i-1][j];
            else{
                t[i][j] = t[i-1][j]||t[i-1][j-nums[i-1]];
            }
        }
    }

    //the last row of the table t gives the possible sums between 0 to range
    //minimum will be range-2*i where i is s1 that is the largest sum possible which will be less than range/2
    int mn = INT_MAX;
    for(int i=0;i<=range/2;i++){
        if(t[n][i]){
            if(range-2*i<mn){
                mn = range-2*i;
            }
            
        }
    }
    cout<<mn<<endl;
}


int main(){
    vector<int> nums;
    for(int i=1;i<7;i++)
        nums.push_back(i);

    //the max possible sum is equal to sum of all elements of the array ie range
    int range=0;
    for(auto x: nums) range+=x;

    //we use subset sum to check which all sums are possible between 0 to range
    subsetsum(nums,sizeof(nums),range);
    return 0;
}
