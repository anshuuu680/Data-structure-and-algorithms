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
public class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode curr = head;
        ListNode prev = null;
        ListNode forward = null;

        if (curr == null) {
            return curr;
        }

        if (curr.next == null) {
            return head;
        }

        while (curr != null) {
            forward = curr.next;
            curr.next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }
}
