#include<bits/stdc++.h>
using namespace std;

int lcs(string one, string two, int m, int n){
    //base case is usually the smallest possible valid input. Which in this case is string of length 0
    if(m==0 ||n==0)
        return 0;
    else{
        //if last letter is equal
        if(one[m-1]==two[n-1])
            return 1+lcs(one,two,m-1,n-1);
        else
        {
            return max(lcs(one,two,m-1,n),lcs(one,two,m,n-1));
        }
        
    }
}

int main(){
    string one = "sunday";
    string two = "saturday";
    int m = one.length();
    int n = two.length();
    cout<<lcs(one, two, m, n )<<endl;

    return 0;
}