#include<iostream>
using namespace std;

class{
    public:
    Node* kreverse(Node* head, int k){
        //base call
        if(head==NULL){
            return NULL;
        }
        //step 1: reverse first k order nodes
Node* next = NULL;
Node* curr = head;
Node* prev = NULL;
int count =0;
while(curr!=NULL || count<k){
    next = curr->next;
    curr->next= prev;
    prev = curr;
    curr= next;
    count++;
}
//step 2: recursion dekhlega aage
if(next!=NULL){
    head->next=kreverse(next,k)
}
return prev;
    }

}