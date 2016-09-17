public class Solution {
    public void moveZeroes(int[] nums) {
        int numofZeros =0 ;
        int i =0;
        while(i<nums.length-numofZeros){
            if(nums[i] == 0){
                ++numofZeros;
                for(int j=i; j<nums.length -numofZeros; j++){
                   nums[j] = nums[j+1];
                }
                nums[nums.length -numofZeros] = 0;
            }
            else i++;
        }
    }
}