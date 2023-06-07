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
    if (head == NULL) {
        return NULL;
    }

    

    ListNode* temp = head;
    ListNode* prev = NULL;

    while (temp->next != NULL) {
        ListNode* curr = temp;
        int k = 0;

        while (temp->next != NULL && temp->val == temp->next->val) {
            temp = temp->next;
            k++;
        }

        if (k) {
            if (prev == NULL)
                head = temp->next;
            else
                prev->next = temp->next;
        } else 
            prev = temp;
       
        if (temp->next != NULL) 
        temp = temp->next;
    }

    return head;
}

};