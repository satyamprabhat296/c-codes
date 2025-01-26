#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    int count =0;
    cout<<"ascii values and char of 26 alphabets:"<<endl;
    while(count<26){
        cout<<ch<<"-"<<int (ch)<<endl;
        ch++;
        count++;
    }
}