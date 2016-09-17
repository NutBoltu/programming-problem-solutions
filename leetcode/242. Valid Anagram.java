public class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length() != t.length()) return false;
        int[] compare = new int[26];
        
        for(int i = 0;i< s.length(); i++){
            compare[Character.getNumericValue(s.charAt(i))-10]++;
            compare[Character.getNumericValue(t.charAt(i))-10]--;
        }
        for(int i =0;i < 26;i++){
            if(compare[i] !=0){
                return false;
            }
        }    
        return true;
    }
}