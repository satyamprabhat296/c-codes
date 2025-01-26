struct Node* reverseList(struct Node *head)
    {
        //ITERATION i.e LOOP METHOD
        if(head == NULL || head->next == NULL){
            return head;
        }
        struct Node *prev, *cur , *add;
        prev = NULL;
        cur = head;
        add = head;
        while(cur != NULL){
            add = cur->next;
            cur->next=prev;
            prev=cur;
            cur=add;
        }
        return prev;
    }

    //RECURSIVE CALL
    void reverse(Node*&head, Node*curr, Node*prev){
        //base case
        if(curr==NULL){
            head= prev;
            return ;
        }
        Node*forward = curr->next;
        reverse(head,forward,curr);
        curr->next=prev;
        }
        Node*rverselinkedlist(Node* head){
            Node*curr = head;
            Node*prev = NULL;
            reverse(head,curr,prev);
            return head;
        }
    