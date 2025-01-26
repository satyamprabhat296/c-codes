#include<iostream>
using namespace std;

void a(int&i)
{
    char ch='a';
    cout<<i<<endl;

}
void b(int&i){
    cout<<i<<endl;

}
int main()
{
    int i=5;
    {
        int i=2;
        cout<<i<<endl;
    }
    return 0;
}