#include<bits/stdc++.h>
using namespace std;
//Given two strings a and b find the lenght of the shortest common supersequence. a supersequence is a string that contains the letters of both the words.

int lcss(string s1, string s2, int m, int n){
    int t[m+1][n+1];

    //we first find the length of longest common subsequence
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            //if either string is of len 0 the lcs is 0
            if(i==0 ||j==0)
                t[i][j] = 0;
            
            //if the last element is equal 
            else if(s1[i-1]== s2[j-1])
                t[i][j] = 1+t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }

    //the length of longest common supersequece is simple m+n the shortest will be of length m+n-lcs(length)
    return m+n-t[m][n];
}

int main(){
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.length();
    int n = s2.length();
    cout<<lcss(s1,s2,m,n)<<endl;
    return 0;
}