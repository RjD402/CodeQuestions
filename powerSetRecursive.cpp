#include<bits/stdc++.h>
using namespace std;
void power(vector<int> nums,vector<int> res,int i){
    if(i==nums.size()){
        for(auto x: res)
            cout<<x<<" ";
            return;
    }
    power(nums,res.push_back(nums[i]),i+1);
    power(nums,res,i+1);
}
int main(){
    vector<int> nums;
    vector<int> res;
    for(int i=0;i<4;i++) nums.push_back(i);
    for(auto x: nums) cout<<x<<" ";
    power(nums,res,0);
    cout<<endl;
    return 0;
}