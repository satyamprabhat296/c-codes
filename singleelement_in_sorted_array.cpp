#include<iostream>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i+=2){
            if(i==n-1|| nums[i]!=nums[i+1]){
      
            return nums[i];
        }
        
        }
        return -1;
    }
};