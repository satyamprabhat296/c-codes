#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<n;++i){
        if(i%2==0){
            for(int j=1;j<=i;++j){
                cout<<j<< " ";
                
            }
        }
            else{
                char ch='A';
                for(int j=0;j<=i;++j){
                    cout<<ch<<" ";
                    ch++;
                }
            }
                cout<<endl;
            }
        }

