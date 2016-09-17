public class Solution {
    public String reverseString(String s) {

        char[] c = s.toCharArray();
        char temp;

        for (int i = 0; i < c.length / 2; i++) {
            temp = c[i];
            c[i] = c[c.length - i -1];
            c[c.length - i -1] = temp;
        }
        return String.valueOf(c);
    }
}