#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int *ptrx=&x;int *ptry=&y;
    int result;
    int *ptr_result=&result;
    cout<<"value is"<<*ptrx<<endl;

    cout<<"value is :"<<*ptry<<"\n";
    cout<<*ptr_result<<endl;

}