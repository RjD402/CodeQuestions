#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,0,1,1,1};
    int n = 6;
    int ans =0, count=0,k;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count=1;
            k=1;
            while(i+k<n){
                if(arr[i+k]==1){
                    count++;
                    k++;
                }else{
                    break;
                }
            }
            if(count>ans) ans = count;
        }
        count =0;
    }
    cout<<ans<<endl;
    return 0;
}