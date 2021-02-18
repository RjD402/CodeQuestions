#include<bits/stdc++.h>
using namespace std;
//given two strings find the length of the longest common substrings between them

int lcs(string s1, string s2, int m, int n){
    int t[m+1][n+1];
    //creat a variable to store the length of the longest substring  
    int result =0;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++)
            if(i==0 || j==0)
                t[i][j] = 0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1]==s2[j-1])
                {
                    t[i][j] = 1+t[i-1][j-1];
                    result = max(result,t[i][j]);
                }
            else
                t[i][j] = 0;
        }
    }
    //the result gives the length in two strings
    return result;
}

int main(){
    string s1 = "abcdef";
    string s2 = "abceef";
    int m = s1.length();
    int n = s2.length();
    cout<<lcs(s1,s2,m,n)<<endl;
    return 0;
}