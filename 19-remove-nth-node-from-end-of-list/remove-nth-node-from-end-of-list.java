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
    public ListNode removeNthFromEnd(ListNode head, int n) {

        ListNode curr = head;
        int count = 0;

        while(curr!=null){
            count++;
            curr = curr.next;
        }

        if(n>=count)
        return head.next;

        int i = 0;
        ListNode temp = head;

        while(i < (count - n - 1)){
            i++;
            temp = temp.next;
        }

        temp.next = temp.next.next;
        return head;
        
    }
}