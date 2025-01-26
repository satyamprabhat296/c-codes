#include<iostream>
using namespace std;
class solution{
    public:
    bool isidentical(Node*r,Node*s){
        if(r==NULL && s==NULL)
        {
        return true;
    }
    if(r==NULL && s!=NULL){
    return false;
}
if(r!=NULL && s==NULL){
    return false;
}
bool left =isidentical(r->left,s->left);
bool right =isidentical(r->right,s->right);
bool value= r->data==s->data;
if(right&& left&& value){
    return true;
}
else{
    return false;
}
    }
