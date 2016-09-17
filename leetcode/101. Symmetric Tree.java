/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public boolean isMirror(TreeNode a, TreeNode b){
        if(a ==null || b == null ) return a==b;
        
        return a.val == b.val && isMirror(a.left, b.right) && isMirror(a.right, b.left);
        
    }
    public boolean isSymmetric(TreeNode root) {
        
        return isMirror(root, root);
        
    }
}