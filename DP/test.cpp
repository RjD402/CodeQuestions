#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        cout<<s[i--]<<" "<<s[j--]<<endl;
    }
    return true;
}

int main(){
    cout<<ispalindrome("nitin")<<endl;

    cout<<"test"<<endl;
    return 0;
}