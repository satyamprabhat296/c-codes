#include<iostream>
#include<stack>
using namespace std;
class twostack{
    int*arr;
    int top1;
    int top2;
    int size;
    public:
    //initiate twostack
    twostack (int s){
        this->size=s;
         top1=-1;
         top2=s;
         arr=new int [s];
        
    }
    //push in stack 1
    void push1(int n){
        if(top2-top1>1){
            top1++;
            arr[top1]=n;
        }
        else{
            cout<<"stack is overflow"<<endl;
        }
    }
        //push in stack 2
        void push2(int n){
            if(top2-top1>1){
                top2--;
                arr[top2]=n;
            }
            else{
                cout<<"stack is underflow"<<endl;
            }
        }
        //pop in stack 1;
        int pop(){
            if(top1>=0){
                int ans =arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }
            //pp in stack 2
            int pop2(){
                if(top2<size){
                    int ans = arr[top2];
                    top2++;
                    return ans;

                }
                else{
                    return -1;
                }
            }
        
            };
    
        
    


