#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>& arr, int temp){
    if(arr.size()==0 || arr.back()<=temp){
        arr.push_back(temp);
        return;
    }else{
        int val = arr[arr.size()-1];
        arr.pop_back();
        insert(arr,temp);
        arr.push_back(val);
    }
}

void solve(vector<int>& arr, int n){
    if(arr.size()==1)
    return;
    
    int temp = arr[arr.size()-1];
    arr.pop_back();
    solve(arr,n-1);
    insert(arr,temp);
}


int main()
{
   cout << "Hello World" << endl; 
   vector<int> arr{43,54,11,64};
   for(auto & x: arr){
       cout<<x<<" ";
   }
   cout<<endl;
   int n = sizeof(arr)/sizeof(arr[0]);
   solve(arr,n);
   for(auto & x: arr){
       cout<<x<<" ";
   }
   return 0;
}