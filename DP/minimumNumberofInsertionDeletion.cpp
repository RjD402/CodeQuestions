#include<bits/stdc++.h>
using namespace std;

//variation of lcs
//given two strings a & b write a program to give out the min number of insertions and deletions
//needed to convert a to b

int lcs(string a, string b, int m, int n){
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
            else if(a[i-1]==b[j-1])      
                t[i][j] = 1+t[i-1][j-1];
            else 
                t[i][j] = max(t[i-1][j],t[i][j-1]);
        }
    }
    int lcslength = t[m][n];
    cout<<lcslength<<"lcs len"<<endl;
    int deletions = m-lcslength;
    int insertions = n-lcslength;
    return deletions+insertions;
    //solution is 3 deletions = hp(1) insertion is p(1)
}

int main(){
    string a = "heap";
    string b = "pea";
    int m=a.size(),n=b.size();
    cout<<lcs(a,b,m,n)<<endl;
    return 0;
}