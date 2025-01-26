#include<iostream>
using namespace std;
int ispresent(int arr[3][3],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void printsum(int arr[3][3],int i, int j){
    cout<<"printing sum :"<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" "<<endl;
    }
}
int main(){
    int arr[3][3];
    cout<<"enetr the elements u want "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing the araay"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" "<<endl;
            cout<<"enetr u want to search"<<endl;
            int target;
            cin>>target;
            if(ispresent(arr,target,3,3)){
                cout<<"found"<<endl;
            }else{
                cout<<"no"<<endl;
            }
            printsum(arr,3,3);
            return 0;
        }
    }
}