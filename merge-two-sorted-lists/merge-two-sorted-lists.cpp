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
  private:

  void insertAttail(ListNode* &tail,ListNode* temp)
  {
      tail->next=temp;
      tail=temp;
  }



public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ansHead = new ListNode(-1);
        ListNode* ansTail = ansHead;

        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                insertAttail(ansTail,list1);
                list1=list1->next;
            }else {
                insertAttail(ansTail,list2);
                list2=list2->next;
            }
        }


        while(list1!=NULL){
              insertAttail(ansTail,list1);
              list1=list1->next;
        }

        
        while(list2!=NULL){
              insertAttail(ansTail,list2);
              list2=list2->next;
        }
       
       ListNode* temp = ansHead;
       ansHead=ansHead->next;
       delete temp;

        return ansHead;

    }
};