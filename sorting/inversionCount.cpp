#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right){
    int i,j,k;
    int inv=0;

    i= left;//index for left subarray
    j=mid;//j is the index for right subarray
    k=left;//k is index for resultant merged subarray

    while((i<=mid-1)&&(j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            inv = inv+(mid-1);
        }
    }

    while(i<=mid-1)
        temp[k++] = arr[i++];

    while(j<= right)
        temp[k++] = arr[j++];

    //putting the temp array into the original array
    for(i=left; i<= right; i++)
        arr[i] = temp[i];

    return inv;
}

int ms(int arr[], int temp[], int left, int right){
    int inv=0,mid;
    if(left<right){
        mid = (left+right)/2;
        inv+=ms(arr, temp, left, mid);
        inv+=ms(arr, temp, mid+1, right);

        inv+= merge(arr, temp, left, mid+1, right);
    }
    //returning the number of inversions
    return inv;
}


int main(){
    int arr[] = {5,3,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    int ans = ms(arr, temp, 0, n-1);
    cout<<"number of inversions are "<<ans<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}