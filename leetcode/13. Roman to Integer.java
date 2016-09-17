public class Solution {
     public int romanToInt(String s) {
        
        if(s.length() == 0 ) return 0;
        HashMap<Character, Integer> romanNumeral = new HashMap<Character, Integer>();
        romanNumeral.put('M', 1000);
        romanNumeral.put('D', 500);
        romanNumeral.put('C', 100);
        romanNumeral.put('L', 50);
        romanNumeral.put('X', 10);
        romanNumeral.put('V', 5);
        romanNumeral.put('I', 1);
        int results = 0;
       
        for (int i = 0; i < s.length()-1; i++) {
            if(romanNumeral.get(s.charAt(i))>=romanNumeral.get(s.charAt(i+1))){
                results+=romanNumeral.get(s.charAt(i));
            }
            else{
                results -=romanNumeral.get(s.charAt(i));
            }
        }
        
        results += romanNumeral.get(s.charAt(s.length()-1));
        return results;
    }
}