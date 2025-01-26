#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int n= str.length();
        int j=0;
        for(int i=0;i<n;i++){
            if(str[i]=='.'){
                reverse(str.begin()+j,str.begin()+i);
                j=i+1;
            }
        }
        reverse(str.begin()+j,str.end());
        reverse(str.begin(),str.end());
        return str;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.reverseWords(s) <<endl;
    }
}