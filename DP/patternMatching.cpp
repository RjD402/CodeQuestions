#include<bits/stdc++.h>
using namespace std;

bool lcs(string a, string b, int m, int n){
    int t[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                t[i][j] = 0;
            else if(a[i-1]==b[j-1])
                t[i][j] = 1+ t[i-1][j-1];
            else
                t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }
    //if the length of lcs is equal to length of smaller string then true else false
    return (t[m][n]==m);
    
}

int main(){
    string a = "axy";
    string b = "adcxpy";
    int m = a.length(), n = b.length();
    cout<<lcs(a,b,m,n)<<endl;

    return 0;
}