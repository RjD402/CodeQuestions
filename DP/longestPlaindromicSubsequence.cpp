#include<bits/stdc++.h>
using namespace std;

//given a string s find out the lenght of the longest palindromic subsequence
// a variation of longest common subsequence problem. Find the lcs between s and reverse(s);

int lcs(string s, int m){
    int t[m+1][m+1];
    string r = s;
    reverse(s.begin(),s.end());
    for(int i =0;i<=m;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)
            t[i][j] = 0;
            else if(s[i-1]==r[j-1])
            t[i][j] = 1+ t[i-1][j-1];
            else
            t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[m][m];
}
int main(){
    string s = "geeksforgeeks";
    int m = s.length();
    cout<<lcs(s,m)<<endl;
    return 0;
}