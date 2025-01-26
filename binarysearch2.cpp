#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int int key)
{
    int start=0;
    int end= size-1;
    int mid= (start+end)/2;
    while(start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }else if(key>arr[mid])
        {
            start = mid+1;
        }
        else{
            end =mid-1;
        }
mid=(start+end)/2;
}
return -1;
}
int main()
{
    int even[6]={2,4,6,8,10};
    int odd[7]={2,4,3,5,9,1,21};
    int evenindex=binarysearch(even,6,8);
    cout<<"index of 8 is \n"<<evenindex<<endl;
    int oddindex=binarysearch(odd,7,21);
    cout<<"index of 21 is \n "<<oddindex<endl;
    return 0;
}