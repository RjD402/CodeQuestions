#include <iostream>

using namespace std;
void solve(string s, int i, string temp, int e){
    if(i>e){
        cout<<temp<<endl;
        return;
    }
    temp.push_back(s[i]);
    solve(s, i+1, temp, e);
    temp.pop_back();
    solve(s, i+1, temp, e);
}

int main()
{
   
   string s = "ABC";
   string res = "";
   solve(s, 0, res,2);
   
   return 0;
}