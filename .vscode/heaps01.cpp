#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent =index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
    void deletefromheap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        //take root to its correct position
        int i=1;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size && arr[i]<arr[leftindex]) {
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
            else{
                return;
            }
        }
    }
    };
    void heapsort(int arr[],int n){
        int size =n;
        while(size>1){
            //swap
            swap(arr[size],arr[1]);
            size--;
            heapify(arr,size,1);
        }
    }
    
int main(){
    heap h;
    h.insert(50);
    h.insert(49);
    h.insert(76);
    h.insert(65);
    h.print();


    h.deletefromheap();
    h.print();
    return 0;
}