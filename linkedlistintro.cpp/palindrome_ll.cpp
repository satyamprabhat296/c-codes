#include<vector>
class Solution{
    private:
    bool checkpalindrome(vector<int>arr){
        int N= arr.size();
        int s=0;
        int e= N-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       vector <int> arr;
       Node*temp = head;
       while(temp!=NULL){
           arr.push_back(temp->data);
           temp= temp->next;
       }
       return checkpalindrome(arr);
    }
};
