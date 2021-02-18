#include<bits/stdc++.h>
using namespace std;

void lcs(string a, string b, int m, int n){
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)    
                t[i][j] = 0;
            //if the two chars are equal then they should not be at the same position
            else if(a[i-1]==b[j-1] && i!=j){
                t[i][j] = 1+t[i-1][j-1];
            }
            else
                t[i][j] = max(t[i][j-1],t[i-1][j]);
        }
    }
    cout<<t[m][n]<<endl;
}

int main(){
    string s = "AABEBCDD";
    cout<<s<<endl;
    int m = s.length();
    //finding the lcs between s and itself
    lcs(s,s,m,m);
    return 0;
}