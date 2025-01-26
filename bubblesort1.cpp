#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
    void printArray(int arr[],int size)
    {
        int i;
        for(i=0;i<size;i++)
        {
            cout<<arr[i];
            cout<<endl;
        }
    }
int main()
{
    int arr[]={3,5,4,1,2,4};
    int n = sizeof(arr)  / sizeof(arr[0]);
    bubble_sort(arr,n);
    cout<<"sorted array :\n";
    printArray(arr,n);
    return 0;
}
