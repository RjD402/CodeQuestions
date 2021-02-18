#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int k, vector<int>& res, int n){
    //create a deque to store negative of every window
    deque<int> dq;

    //process the first k elements]
    int i;
    for( i=0;i<k;i++)
        if(arr[i]<0){dq.push_back(i);}

    for( ;i<n;i++){
        //the element at the front of the dq is the first negative number in the window
        if(!dq.empty()){
            res.push_back(arr[dq.front()]);
        }else{
            res.push_back(0);
        }

        //removing the elements out of the window from the deque
        while(!dq.empty() && dq.front()<(i-k+1)){
            dq.pop_front();
        }

        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    //adding the remaining elements of the queue into res
    if(!dq.empty()){
        res.push_back(arr[dq.front()]);
    }else
        res.push_back(0);
}

int main(){
    int arr[] = {-8, 2, 3, -6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    vector<int> res;
    solve(arr, k, res, n);
    for(auto x: res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}