/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode swapPairs(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode n1,n2,n3;
        n1 = head; 
        n2 = head.next;
        
        n3 = n2.next;
        n2.next = null;
        n1.next.next = n1;
        n1.next  = swapPairs(n3);
        
        return n2;
        
    }
}