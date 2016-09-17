public class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {

        if (nums1.length == 0 || nums2.length == 0) {
            return new int[0];
        }

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        int i = 0, j = 0;
        ArrayList<Integer> intersect = new ArrayList<Integer>();
        while (i < nums1.length && j < nums2.length) {
            if (nums1[i] > nums2[j]) {
                j++;
            } else if (nums2[j] > nums1[i]) {
                i++;
            } else {
                intersect.add(nums1[i]);
                i++;
                j++;
            }

        }
        int[] results = new int[intersect.size()];

        for (int k = 0; k < intersect.size(); k++) {
            results[k] = intersect.get(k);
        }

        return results;
    }
}