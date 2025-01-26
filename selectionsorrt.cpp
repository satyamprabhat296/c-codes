#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_Sort(int arr[],int n)
{
    int i,j,minidx;
    for(i=0; i<n-1;i++)
    {
    
        minidx=i;
        for(j=i+1;j<n;j++){
        
            if(arr[j] <arr [minidx])
          minidx=j;
}

        if(minidx!=i){
        
swap(arr[minidx], arr[i]);
            
        }  
    
    }
}

void print_Array(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
    int arr[]={64,25,12,22,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    selection_Sort(arr,n);
    cout<<"sorted array :";
    print_Array(arr,n);
    return 0;
}