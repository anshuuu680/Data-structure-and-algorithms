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
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* temp = head;//Temporary pointer
        ListNode* pre = NULL;//Initializing previous pointer to NULL
        
        /* Looping through the list untill the tempurary pointer
        reaches NULL */  
        while(temp != NULL){

            int k = 1;
            ListNode* curr = temp; //Initialize current pointer to temp
            
            //Counting the frequency of the current element
            while((temp != NULL) && (temp->val == curr->val)){
                temp = temp->next;
                k++;
            }
            k--;

            //If frequency of the element is 1 put it in the the list
            if(k == 1){

                // If the previous pointer is null then initialize
                // the head pointer  and the previous pointer 
                // to the current pointer
  
                if(pre == NULL){
                    head = curr;
                    pre = curr;
                }

                //if not then previous to current and next value of
                // privious pointer to current pointer
                else{
                    pre->next = curr;
                    pre = curr;
                }
            }
            // when temporary pointer reaches to NULL
            // and prevoius pointer is not null then initialie
            // next value of prevoius pointer to NULL or temp

            if(temp == NULL && pre != NULL){
                pre->next = temp;
            }
        } 

        // If prevoius pointer is still is NULL, it means that 
        // no value is eligible for the ans list
        // so initialize head to NULL and return head

        if(pre == NULL){
            head = NULL;
        }
        return head;
    }
};