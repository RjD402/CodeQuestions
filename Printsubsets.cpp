#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//problem to print all subsets of a given vector
//using either choose an element at a position or not
//time complexity = O(2^n);
//as for each element we either choose it or not choose it
//thus at each position we have two options
//so 2*2*2...*2(this happens n times) so 2^n
void solve(vector<int>& nums, int i, vector<int>& temp, vector<vector<int>>& res){
    if(i>=nums.size()){
        res.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    solve(nums, i+1, temp, res);
    temp.pop_back();
    solve(nums, i+1, temp, res);
}


int main()
{
   vector<int> nums = {3,2,1};
   cout<<"done"<<endl;
   vector<int> temp;
   vector<vector<int>> res;
   solve(nums, 0, temp, res);
   for(auto& a: res){
       for(auto& b: a){
           cout<<b<<" ";
       }
       cout<<endl;
   }
   
   return 0;
}