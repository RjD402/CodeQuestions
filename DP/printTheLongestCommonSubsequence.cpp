#include<bits/stdc++.h>
using namespace std;


void lcs(string s1, string s2, int m, int n){
    // t[m][n] has the length of lcs to access it we need table of m+1 n+1 size
    int t[m+1][n+1];

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            //if length of either string is zero lcs is obviously 0
            if(i==0 || j==0)
                t[i][j] = 0;
            
            else if(s1[i-1]==s2[j-1])
                t[i][j] = t[i-1][j-1]+1;
            else
                t[i][j] = max(t[i-1][j], t[i][j-1]);
        }
    }

    //storing and returning the sting of lcs
    string res="";
    int i=m,j=n;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            res.push_back(s1[i-1]);
            i--; j--;
        }else{
            if(t[i-1][j]>t[i][j-1])
                i--;
            else
                j--;
        }
    }
    reverse(res.begin(), res.end());
    cout<<res<<endl;
}

int main(){
    string s1 = "sunday";
    string s2 = "saturday";
    int m = s1.length();
    int n = s2.length();
    lcs(s1,s2,m,n);
    return 0;
}