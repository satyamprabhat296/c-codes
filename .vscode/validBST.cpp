#include<iostream>
using namespace std;

class solution{
    public:
     bool isbsttraversal(vector<int>&arr){
        for(int i=0;i<arr.size();i++){
            if(arr[i-1]>=arr[i]) return false;
        }
        return true;

    }
}