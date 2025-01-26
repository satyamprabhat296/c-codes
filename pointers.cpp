#include<iostream>
using namespace std;
int main()
{
    int num =5;
    cout<<"num is:"<< num <<endl;
    // address of the operator 
    cout<<"address of the operator is:"<<&num<<endl;

int *ptr = &num;
cout<<" Address is][] :"<<ptr<<endl;
cout<<"value is :"<<endl;

double d= 4.3;
double*p2 = &d;
cout<<" Address is :"<<p2<<endl;

cout<<"value is :"<<*p2<<endl;
}