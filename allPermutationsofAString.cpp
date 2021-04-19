#include <iostream>

using namespace std;

//time complexity O(time to print one permution of string(n) * number of permutations of string (n(n+1)/2))
//thus time complexity = O(n2)

//the number of levels in the tree = number of elements in the string

void solve(string s, int l, int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    
    for(int i=l; i<=r;i++){
        //swapping the lth element
        swap(s[i],s[l]);
        //now keeping the lth element fixed and moving to l+1 th element
        solve(s,(l+1),r);
        //backtracking
        swap(s[i],s[l]);
    }
}

int main()
{

   string s = "ABC";
   int length = s.length();
   solve(s,0,length-1);
   return 0;
}



