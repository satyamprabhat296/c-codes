#include<iostream>
using  namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       
        if(head == NULL)
        {
            return head;
        }
        ListNode* curr = head;
        while(curr != NULL && curr -> next != NULL)
        {
            if(curr -> val == curr -> next -> val)
            {
            
                ListNode* next = curr -> next -> next;
                delete(curr -> next);
                curr -> next = next;
            }
            else
            {
                curr = curr -> next;
            }
        }
        return head;
    }
};