/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        
       ListNode slow, fast;
       if(head  == null || head.next == null) return false;
       slow = head;
       fast = head.next;
        while(true){
            if(fast == null || fast.next == null) return false;
            else if(slow == fast || slow == fast.next) return true;
            else{
                slow = slow.next;
                fast = fast.next.next;
            }
        }
        
    }
}