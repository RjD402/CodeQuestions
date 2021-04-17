#include<bits/stdc++.h>
using namespace std;
//dimensions of this table will be according to the max size of the table
int t[101][101];
int isPalindrome(string s, int start, int end){
    
    while(start<end){
        if(s[start]!=s[end])
        // cout<<s[start]<<" "<<s[end]<<endl;
        return false;
        start++;
        end--;
    }
    return true;
}

int solve(string s, int i, int j){
    //signifies an empty string
    if(i>j) return 0;
    //signifies a single character,
    // single character does not require partitioning as it is already partitioned
    if(t[i][j]!=-1)
    return t[i][j];

    if(i==j) return t[i][j]=0;

    if(isPalindrome(s,i,j))
    return t[i][j]=0;

    int mn = INT_MAX;
    for(int k=i;k<j;k++){
        //+1 shows the cut made between the two parts
        //rather than simply calling we first check if the subparts already solved or not
        int left, right;
        if(t[i][k]!=-1){
            left = t[i][k];
        }else{
            t[i][k] = solve(s,i,k);
            left = t[i][k];
        }

        if(t[k+1][j]!=-1){
            right = t[k+1][j];
        }else{
            t[k+1][j] = solve(s,i+1,j);
            right = t[k+1][j];
        }
        int temp = 1 + left + right;
        mn = min(temp, mn);
    }
    //returning the minimum cost
    return t[i][j]= mn;
}

int main(){
    string name = "rajat";
    memset(t, -1, sizeof(t));
    cout<<solve(name, 0, name.size()-1)<<endl;
    return 0;
}

// palindromePartitioningTopDownOptimized.cpp