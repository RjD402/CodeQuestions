#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int m, int n){
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
            else if(s1[i-1]==s2[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    //the bottom right box t[m][n] gives us the length of the longest common subsequence in two 
    //strings of length m and n
    return t[m][n];
}

int main(){
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.length();
    int n = s2.length();
    cout<<lcs(s1,s2,m,n)<<endl;
    return 0;
}