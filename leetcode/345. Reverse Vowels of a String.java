public class Solution {
    public boolean isVowel(char v) {
        return (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U');
    }

    public String reverseVowels(String s) {
        int[] vowelIndexes = new int[s.length()];
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s.charAt(i))) {
                vowelIndexes[num] = i;
                num++;
            }
        }
        char temp;
        char[] c = s.toCharArray();
        for (int i = 0; i < num / 2; i++) {
            temp = c[vowelIndexes[i]];
            c[vowelIndexes[i]] = c[vowelIndexes[num - i - 1]];
            c[vowelIndexes[num - i - 1]] = temp;
        }

        return String.valueOf(c);
    }
    
}