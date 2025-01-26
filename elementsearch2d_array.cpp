#include<iostream>
using namespace std;
int ispresent(int arr[3][4],int target,int i,int j)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[3][4]= {1,2,3,4,5,67,8,9,0,78,6,5};
    for(int i=0;i<3;i++)
for(int j=0;j<4;j++)
{
    cout<< arr[i][j]<<" ";
    
}
cout<<"\n enter the element u want to search";
int target;
cin>>target;
if(ispresent(arr,target,3,4)){
    cout<<"element found"<<endl;
}else{
    cout<<"not found"<<" ";
}
return 0;
}
