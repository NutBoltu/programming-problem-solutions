public class Solution {
     public int titleToNumber(String s) {
        int i = s.length() - 1;
        int t =0, results = 0;
        
        while (i >= 0) {
            results  += (Character.getNumericValue(s.charAt(i))-9)* Math.pow(26.0, (double) t);
            t++;
            i--;
        }
        return results;
    }
}