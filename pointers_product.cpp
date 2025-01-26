#include<iostream>
using namespace std;
int main()
{
    int x,y;
    
    
    

    
    cout<<"enter value of x:";
    cin>>x;
    cout<<"\n enetr value of y:";
    cin>>y;
int *ptrx=&x;
    int*ptry=&y;
    int result =(*ptrx)*(*ptry);


cout<<"product is "<<result<<"\n";
}