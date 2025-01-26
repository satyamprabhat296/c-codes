#include<iostream>
using  namespace std;
int search (int arr[],int size,int key)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        
        return 1;
    }return 0;
}

int main()
{
    int arr[10]={1,2,3,4,56,7,8,9,10};
    cout<<"enter the key u want to search\n"<<endl;
    int key;
    cin>>key;
    int found = search(arr,10,key);
    if(found)
    {
        cout<<"key is present\n"<<endl;
    }
    else{
        cout<<"key is not found\n"<<endl;
    }return 0;
}
