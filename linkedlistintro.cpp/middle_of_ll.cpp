#include<iostream>
using namespace std;
class solution{
    public:
    int getmiddle(Node*head)
    {
        if(head==0){
            return -1;
        }
        int c =0;
        Node*last = head;
        while(last){
            last = last->next;
            c++;

        }
        c= (c/2) +1;
        last = head;
        while(c>1){
            last= last->next;
            c--;
        }
        return last->data;
    }
};