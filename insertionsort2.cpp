#include<iostream>
using namespace std ;
void insertionsort(int arr[],int n)
{
    for(int i=1; i<n;i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
        
    }
}
else

    break;
}
 arr[j+1]=temp;

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
    insertionsort(arr,n);
    cout<<"sorted array :";
    print_Array(arr,n);
    return 0;
}