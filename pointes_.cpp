#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,5,6};
    cout<<"address of the first memory block:"<<arr<<endl;
    cout<<"address is:"<<&arr<<endl;
    cout<<"addres is:" <<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<"4th:"<<*arr<<endl;
    cout<<"5th:"<<*arr+1<<endl;
    cout<<"7th:"<<*(arr+1)<<endl;

    int i=2;
    cout<<i[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;


    int r[20]={1,2,3,4,5};
    cout<<"->"<<&r[0]<<endl;
    int*p=&r[0];
    cout<<"->"<<&p<<endl;


    int arr2[5]={1,2,3,4,5};
    char ch[8]="abcde";
    char *c =&ch[0];
    cout<<c<<endl;
    cout<<arr<<endl;
    cout<<ch<<endl;
    return 0;
}
