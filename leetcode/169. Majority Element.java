public class Solution {
   public int majorityElement(int[] nums) {

        if (nums.length == 1) {
            return nums[0];
        }

        HashMap<Integer, Integer> exists = new HashMap<Integer, Integer>();

        for (int i = 0; i < nums.length; i++) {
            if (exists.get(nums[i]) == null) {
                exists.put(nums[i], 1);
            } else if (exists.get(nums[i]) + 1 > nums.length / 2) {
                return nums[i];
            } else {
                exists.put(nums[i], exists.get(nums[i]) + 1);
            }
        }

        return 0;
    }
}