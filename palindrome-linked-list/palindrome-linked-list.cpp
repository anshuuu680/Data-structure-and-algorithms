/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

  ListNode* reverseLL(ListNode *&head){
      ListNode* curr=head;
      ListNode* prev=NULL;
      ListNode* forward=NULL;

      while(curr!=NULL){
          forward=curr->next;
          curr->next=prev;
          prev=curr;
          curr=forward;
      } 
      return prev;

  }


public:
    bool isPalindrome(ListNode* head) {


        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp1 = head;

        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL)
            fast=fast->next;
            slow=slow->next;
        }

       ListNode* temp2 = reverseLL(slow);


       while(temp1!=NULL && temp2!=NULL){
           if(temp1->val!=temp2->val){
               return false;
           }
           temp1=temp1->next;
           temp2=temp2->next; 
       }

       return true;
        
    }
};