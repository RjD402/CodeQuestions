#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int temp[r-l+1];//setting a temporary array
    int p = l, q=mid+1,k=0;
    for(int i=l;i<=r;i++){
        if(p>mid){ //checks if first part comes to an end
            temp[k++] = arr[q++];
        }
        else if(q>r){ //checks if second part comes to an end
            temp[k++] = arr[p++];
        }
        else if(arr[p]>arr[q]){
            temp[k++] = arr[q++];
        }else{
            temp[k++] = arr[p++];
        }
    }
    for(int p=0; p<k;p++){
        arr[l++] = temp[p];
    }

}

void mergesort(int arr[], int l, int r){
    if(l<r){
         int mid = l+(r-l)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1,r);
        merge(arr, l, mid, r); 
    }
   
}

int main(){
    int arr[] = {32,42,2,3,55,341,35};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, n-1);
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}