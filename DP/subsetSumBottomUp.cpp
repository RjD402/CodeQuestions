#include<bits/stdc++.h>
using namespace std;
//bottom up solution using tabulation method


//creating a dp array according to the size of question constrains t[n+1][sum+1]; where n = number of items in the array
int t[102][102];

int solve(int arr[],int sum,int n){
    // base conditions of recusion turn into table initialization

    //if set is empty then no sum can be made. except for zero
    for(int j=0;j<=sum;j++)
        t[0][j]=0;

    //if sum is zero then it is always possible by choosing an empty set.
    for(int i=0;i<=n;i++)
        t[i][0]=1;
    
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            
            //if the value of sum is less than the value of set item then we just skip the item
            if(arr[i-1]>j){
                t[i][j] = t[i-1][j];
            }else{
                //else we see if it is possible by either choosing the current item or not choosing the current item.
                t[i][j] = t[i-1][j-arr[i-1]]||t[i-1][j];
            }
        }
    }
    
    return t[n][sum];
}
int main(){
    memset(t,-1,sizeof(t));
    int arr[] = {3, 34, 4, 12, 4, 5};
    int sum = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr, sum, n)<<" tabulation solution"<<endl;
    return 0;
}