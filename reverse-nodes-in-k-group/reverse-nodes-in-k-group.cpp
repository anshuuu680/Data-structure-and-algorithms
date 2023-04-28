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
    ListNode* reverseKGroup(ListNode* head, int k) {
            
              ListNode* cursor=head;
             for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }

            ListNode* curr=head;
            ListNode* forward=NULL;
            ListNode* prev=NULL;

            int count=0;

            while(count<k && curr!=NULL){
                forward = curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
                count++;
            }

            if(forward!=NULL)
            head->next=reverseKGroup(forward,k);

            return prev;
        
    }
};