#include<iostream>
using namespace std;
int main()
{
    char char1,char2;
    cout<<"enter the first character:";
    cin>>char1;
    cout<<"enter the second character\n:";
    cin>>char2;
    int ascii1 =int (char1);
    int ascii2 =int (char2);
    int difference =abs(ascii1-ascii2);
    cout<<"the difference of values is:"<<difference<<endl;
}

