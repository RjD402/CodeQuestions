#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    stack<int> s;
    vector<int> res;
    res.push_back(-1);
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            s.push(arr[i]);
            continue;
        }else{
            while(!s.empty()){
                if(s.top()>arr[i]){
                    res.push_back(s.top());
                    s.push(arr[i]);
                    break;
                }else{
                    s.pop();
                }
            }
            if(s.empty()){
                res.push_back(-1);
                s.push(arr[i]);
            }
        }
    }
    reverse(res.begin(),res.end());
    for(auto& x: res){
        cout<<x<<",";
    }
}


int main(){
    int arr[] = {13,7,6,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    return 0;
}