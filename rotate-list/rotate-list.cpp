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


 

public:
    ListNode* rotateRight(ListNode* head, int k) {

        int len =0 ;
       ListNode* temp=head;

     while(temp!=NULL){
         len++;
         temp=temp->next;
     }
       temp=head;
       ListNode* prev=NULL;

      if(head==NULL || head->next==NULL || k%len==0)
      return head;

        k = k % len;
        int i=0;
        int t= len-k;

        while(t--){
          prev=temp;
          temp=temp->next;
        }

        prev->next = NULL;
        ListNode* tail = temp;

        while(tail!=NULL && tail->next!=NULL){
            tail=tail->next;
        }

        tail->next = head;
        
       return temp;
        
    }
};