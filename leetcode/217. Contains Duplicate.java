public class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> exists = new HashMap<Integer, Integer>();
         for (int i = 0; i < nums.length; i++) {
              if (exists.get(nums[i]) == null) {
                exists.put(nums[i], 1);
            
            } else {
                return true;
            }
         }
         return false;
    }
}