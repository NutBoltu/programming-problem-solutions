/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode root = head;
        while(root!=null){
            if(root.next !=null && root.val == root.next.val){
                root.next= root.next.next;
            }
            else root = root.next;
            
        }
        return head;
    }
}