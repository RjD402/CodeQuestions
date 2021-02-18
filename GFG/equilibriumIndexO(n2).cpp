#include<bits/stdc++.h>
using namespace std;
//equilibrium index solution O(n*n) approach
int main(){
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    for(int i=0;i<n;i++){

        int leftsum =0, rightsum=0;

        //find the left sum
        for(int j=0;j<i;j++)
        leftsum+=arr[j];

        //find the rightsum
        for(int k=i+1;k<n;k++)
        rightsum+=arr[k];

        if(leftsum==rightsum)
        {
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag) return 0;
    else cout<<"-1"<<endl;
    return 0;
}