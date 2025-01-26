#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of terms\n:";
    cin>>n;
    int t=4;
    cout<<"ap\n";
    for(int i=0; i<=n; i++)
    {
        cout<<t<<endl;
        t=t+3;
    }
}