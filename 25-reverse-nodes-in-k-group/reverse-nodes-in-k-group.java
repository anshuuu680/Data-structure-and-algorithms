/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode cursor= head;

        for(int i=0;i<k;i++){
            if(cursor == null) return  head;
            cursor = cursor.next;
        }
        
        ListNode curr = head;
        ListNode forward = null;
        ListNode prev = null;

        int count = 0;

        while(curr!=null && count<k){
            forward = curr.next;
            curr.next = prev;
            prev = curr;
            curr = forward;
            count++;
        } 

        if(forward!=null){
            head.next = reverseKGroup(forward,k);
        }

        return prev;

    }
}