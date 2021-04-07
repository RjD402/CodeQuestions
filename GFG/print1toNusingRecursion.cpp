#include<bits/stdc++.h>
using namespace std;
//a function to print 1 to n using recursion
//the function solve(n) print 1 2 3 4 5 ... n
//thus by induction a function solve(n-1) will print 1 2 3 .. n-1
// so we can just add n after solve(n-1) to print from 1 to n
void solve(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    solve(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    solve(n);
    return 0;
}