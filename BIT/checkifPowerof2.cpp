#include<bits/stdc++.h>
using namespace std;
//bit program to check if a number is power of 2 or not

int check(int x){
    //first x to handle the case of 0
    //numbers in power of 2 have only 1 set bit
    //x & (x-1) of power of 2 numbers is 0 eg: 16 = 10000 15 = 01111
    return x && (!(x & (x-1)));
}

int main(){
    for(int i=0;i<10;i++){
        cout<<i<<" "<<check(i)<<endl;
    }
    return 0;
}