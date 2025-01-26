#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value of a"<<endl;
    cin>>a;
    int b;
    cout<<"enter value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operator u want to perform"<<endl;
    cin>>op;

    switch(op){
        case '+':cout<<(a+b)<<endl;
        break;
        case '-':cout<<(a-b)<<endl;
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '%': cout<<(a%b)<<endl;
        break;
        case '/' : cout<<(a/b)<<endl;
        break;
        
        default: cout<<"enter the valid op\n"<<endl;

    }
}