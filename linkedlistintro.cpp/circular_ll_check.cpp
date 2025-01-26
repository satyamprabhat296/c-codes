class Solution {
  public:
    bool isCircular(Node *head) {
       if(head==NULL)  //As per mentioned , if linked list is empty it is considered as circular
    {
        return true;
    }
    Node*temp=head; 
    while(temp->next!=NULL)
    {
        if(temp->next==head) //This condition is to check whether list is circular or not
        {
            return true;
        }
        temp=temp->next; 
    }
    return false; 

    }
};