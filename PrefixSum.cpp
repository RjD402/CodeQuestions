#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int psum[n];
    psum[0] = arr[0];
    for(int i=1;i<n;i++){
        psum[i]=arr[i]+psum[i-1];
    }
    for(int i=0;i<n;i++)
        cout<<psum[i]<<" ";
    cout<<endl;
    return 0;
}