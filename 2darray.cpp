#include<iostream>
using namespace std;
int main()
    {
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,14,16};
 
    
for(int row=0;row<3;row++)
{
for(int col=0;col<4;col++)
{
    cout<<arr[row][col]<<" ";
}
cout<<endl;
}
    return 0;
    }
