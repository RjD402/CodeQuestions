#include<bits/stdc++.h>
using namespace std;
void printarr(vector<int>& res){
    for(auto x: res){
        cout<<x<<" ";
    }
    cout<<endl;
}
void solve(int arr[],vector<int> res,int n,int i){
    if(i==n){
        for(auto x: res)
            cout<<x<<" ";
        cout<<endl;
    }
    solve(arr,res.push_back(arr[i]),n,i+1);
    solve(arr,res,n,i+1);
    return;
}
int main(){
    int arr[] = {1,2,3,4};
    vector<int> res;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    solve(arr,res,n-1,0);
    return 0;
}