#include<iostream>
using namespace std;

int fib(int x){
    if((x==1) || (x==0)){
        return (x);
    }else{
        return (fib(x-1)+fib(x-2));
    }
}
int main()
{
    int x,i=0;
    cout<<"enter the number of terms\n"<<endl;
    cin>>x;
    cout<<"\n fib series is:";
    while(i<x){
        cout<<" "<< fib(i);
        i++;
    
    }
}
