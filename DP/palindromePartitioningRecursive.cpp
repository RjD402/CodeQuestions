#include<bits/stdc++.h>
using namespace std;
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
    if(i==j) return 0;

    if(isPalindrome(s,i,j))
    return 0;

    int mn = INT_MAX;
    for(int k=i;k<j;k++){
        //+1 shows the cut made between the two parts
        int temp = 1 + solve(s, i,k) + solve(s,k+1,j);
        mn = min(temp, mn);
    }
    //returning the minimum cost
    return mn;
}

int main(){
    string name = "rajat";
    cout<<solve(name, 0, name.size()-1)<<endl;
    return 0;
}