ListNode* temp = head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        temp = head;
        for(int i=1;i<=cnt/2;i++)
        temp=temp->next;
        return temp;
    }
};