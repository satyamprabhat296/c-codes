#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int selectionsort(int arr[],int n)
{
    int i,j,minidx;
    for(i=0;i<n-1;i++)
{
    minidx=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minidx])
        minidx=j;
    }
    if(minidx!=i)
    {
        swap(arr[minidx],arr[i]);
    }
}
}
int printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size; i++)
    
        cout<<arr[i]<< " "<<endl;
} 

int main()
{
int arr[]={64,45,12,22,11};
int n= sizeof (arr)/ sizeof arr[0];
selectionsort(arr,n);
cout<<"sorted array : ";
printarray(arr,n);
return 0;
}


