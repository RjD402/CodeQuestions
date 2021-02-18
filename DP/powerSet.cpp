#include<bits/stdc++.h>
using namespace std;
//using bitmasking to print all subsets of a given set

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int counter = pow(2,n);
    for(int i=0;i<counter;i++){
        for(int j=0;j<n;j++){
            if(counter & 1<<j){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}