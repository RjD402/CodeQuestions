#include<bits/stdc++.h>
using namespace std;

//given a string find the minimum number of deletions required to make it palindrom
//a variation of lcs problem. Find the length longest plaindromic subsequence of the string and subtract it from len of string

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

    return m-t[m][m];
}

int main(){
    string s = "rajat";
    int m = s.length();
    cout<<lcs(s,m)<<endl;
    return 0;
}