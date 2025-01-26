#include<iostream>
using namespace std;
int main()
{
    int x= 18;
    float y=7.0;
    int *ptr=&x;
    cout<<"address stord inside ptr:"<<ptr<<endl;
    cout<<"value present at the address stored at ptr :"<<*ptr<<endl;
    float *ptrf=&y;
    cout<<"address stored at ptrf:"<<ptrf<<endl;
    cout<<"value stored at ptrf"<<*ptrf<<endl;

    x=23;
    cout<<"new updated value of x"<<x  <<"\n";
    cout<<"ptr still pointin to the same memory which has 23 instead of 18:"<<endl;

    return 0;
}