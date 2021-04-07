#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    //setting up the base condition
    // the base condition is the smallest valid input to the function
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    solve(n-1);
}

int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}