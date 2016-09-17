public class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length <= 1) {
            return 0;
        }
        int min = prices[0];
        int results = 0;
        for (int i =0;i< prices.length; i++ ) {
                results = Math.max(results, prices[i]-min);
                min = Math.min(min, prices[i]);
        }
        return results;
    }
}