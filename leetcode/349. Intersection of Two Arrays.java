public class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {

        int length1 = nums1.length;
        int length2 = nums2.length;
        int i = 0, j = 0;
        int[] tempResults = new int[Math.max(length1, length1)];

        if (length1 == 0 || length2 == 0) {
            return new int[0];
        }

        Arrays.sort(nums1);
        Arrays.sort(nums2);
        int count = 0;
        while (i < length1 && j < length2) {

            if (i > 0 && nums1[i] == nums1[i - 1]) {
                i++;
                continue;
            }
            if (j > 0 && nums2[j] == nums2[j - 1]) {
                j++;
                continue;
            }

            if (nums1[i] > nums2[j]) {
                j++;
            } else if (nums2[j] > nums1[i]) {
                i++;
            } else {
                tempResults[count++] = nums1[i];
                i++;
                j++;
            }

        }
        int[] results = new int[count];
        System.arraycopy(tempResults, 0, results, 0, count);
        return results;
    }
}