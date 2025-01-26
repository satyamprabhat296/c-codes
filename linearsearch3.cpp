#include<iostream>
using namespace std;
int search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }return 0;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,99};
    cout<<"enetr the key u want to search\n"<<endl;
    int key;
    cin>>key;
    int got= search(arr,10,key);
    if (got)
    {
        cout<<"key is present\n"<<endl;
    }
    else
    {
        cout<<"key is not present\n"<<endl;
    }
return 0;
}