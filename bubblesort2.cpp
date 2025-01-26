#include<iostream>
using namespace std;
void bubblesort (int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printarray(int arr[],int m)
{
for(int i=0;i<m;i++)
{
    cout<<arr[i]<<" "<<endl;
    
}
}
int main()
{
    int arr[]={1,3,45,67,89,6};
    int n= sizeof(arr)/sizeof (arr[0]);
    bubblesort(arr,n);
    cout<<"sorted array is :"<<endl;
    printarray(arr,n);
    return 0;
}