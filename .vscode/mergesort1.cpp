#include<iostream>
using namespace std;
void merge (int *arr,int s,int e){

    int mid = (s+e)/2;
    int len1= mid-s+1;
    int len2= e-mid;
    int *first = new int(len1);
    int *second= new int(len2);

    //copy values
    int mainarrayindex = s;
    for(int i=0;i<len1;i++){
        first[i]= arr[mainarrayindex++];
    }
    mainarrayindex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }
    //merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]< second[index2]){
        
            arr[mainarrayindex++]==first[index1++];
        }
        else{
            arr[mainarrayindex++]== second[index2++];
        }
    }
    
    
    while(index1< len1){
        arr[mainarrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++]=second[index2++];
    }
}
void mergesort(int*arr,int s,int e){
    if(s>=e){
        return;
    }

    int  mid=(s+e)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[15]={1,4,2,5,7,6,9,10,9,34,23,11,22,21,34};
    int n=15;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";  
    }
    cout<<endl;
    return 0;
}

