#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
void solve(int arr[], int n, vector<int>& res,int k){
    int lar = INT_MIN;
    for(int i=0;i<n-k+1;i++){

        for(int j=0;j<k;j++){
            if(arr[i+j]>lar){
                lar = arr[i+j];
            }
        }
        res.push_back(lar);
    }
}

int main(){
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    vector<int> res;

    solve(arr, n, res,k);
    for(auto x: res)
    cout<<x<<" ";
    cout<<endl; 
    return 0;
}