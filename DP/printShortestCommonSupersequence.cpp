#include<bits/stdc++.h>
using namespace std;
//given two strings a b print the shortest common supersequence between them

void lcs(string a, string b, int m, int n){
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

    string res= "";
    int i=m, j=n;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1])
            {
                res.push_back(a[i-1]);
                i--; j--;
            }
        else if(t[i-1][j]>t[i][j-1])
            {res.push_back(a[i-1]); i--;}
        else
            {res.push_back(b[j-1]); j--;}
        }
        while(i>0)
            res.push_back(a[i--]);
        while(j>0)
            res.push_back(a[j--]);
    }
    cout<<res<<endl;
}

int main(){
    string a = "sunday";
    string b = "saturday";
    int m = a.length();
    int n = b.length();
    lcs(a,b,m,n);
    return 0;
}