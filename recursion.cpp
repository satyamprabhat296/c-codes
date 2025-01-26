#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    return 1;

    
    
    return n*factorial(n-1);
  /*/ int value = factorial(n-1);
    int answer= n * value;
    return answer;*/
}

int main()
{
    int n;
    cin>>n;
    int ans= factorial(n);
    cout<< ans <<endl;
    return 0;
}