public class Solution {
     public int climbStairs(int n) {
        int[] ways = new int[n+1];
        
        int length = n;
        ways[n] = 1;
        while(length>0){
            if(length-1>=0) ways[length-1] +=ways[length];
            if(length-2>=0) ways[length-2] +=ways[length];
            length--;
        }
        return ways[0];
    }
}