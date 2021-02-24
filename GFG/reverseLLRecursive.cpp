#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/reverse-a-linked-list/
Node* reverse(Node* head){
    if(head == NULL || head->next==NULL)
        return head;

    Node* res = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return res;
}

int main(){
    revesre(ll);
    return 0;
}