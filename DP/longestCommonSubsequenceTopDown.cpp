#include<bits/stdc++.h>
using namespace std;



int t[1001][1001];
int lcs(string s1, string s2, int m, int n, int t[1001][1001]){
    if(m==0||n==0)
        return t[m][n] = 0;
    if(t[m][n]!=-1)
        return t[m][n];
    else if(s1[m-1]==s2[n-1])
        return t[m][n] = 1+lcs(s1,s2,m-1,n-1,t);
    else
        return t[m][n] = max(lcs(s1,s2,m-1,n,t),lcs(s1,s2,m,n-1,t));
    
}

int main(){
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.length();
    int n = s2.length();
    memset(t,-1,sizeof(t));
    cout<<lcs(s1,s2,m,n,t)<<endl;
    return 0;
}