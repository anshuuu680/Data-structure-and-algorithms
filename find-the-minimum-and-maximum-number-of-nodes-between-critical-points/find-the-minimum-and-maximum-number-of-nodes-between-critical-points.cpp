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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,-1);
         
         int mindis = INT_MAX;
         int maxdis = INT_MIN;

         int cp = -1;
         int totalcp=0;
         int index=1;

         int fp = INT_MAX;
         int lp = INT_MIN;

         ListNode* prev=head;
         ListNode* temp = head->next;

         while(temp!=NULL && temp->next!=NULL){
               if((temp->val < prev->val &&  temp->val < temp->next->val) ||
                 (temp->val > prev->val &&  temp->val >temp->next->val) ){
                     fp=min(fp,index);
                     lp=max(lp,index);
                     if(cp!=-1){
                         mindis=min(mindis,index-cp);
                     }
                     cp=index;
                     totalcp++;
                 }
                     index++;
                     prev = temp;
                     temp=temp->next;
         }
         if(totalcp<2){
         return ans;
         }

         maxdis=lp-fp;
         
        ans[0]=mindis;
         ans[1]=maxdis;

         return ans;
    }
};