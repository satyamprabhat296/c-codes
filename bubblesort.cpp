#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[],int n)
{
    int i,j;
    for(i=0; i<n-1;i++)
    {
    
    
        for(j=0;j<n-1-i;j++){
        
            if(arr[j] >arr [j+1])
          


        
swap(arr[j], arr[j+1]);
            
        }  
    }
}void print_Array(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
    int arr[]={16,12,12,22,11};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble_Sort(arr,n);
    cout<<"sorted array :";
    print_Array(arr,n);
    return 0;
}
