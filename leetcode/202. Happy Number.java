public class Solution {
   public boolean isHappy(int n) {
        
         HashSet <Integer>  isExists =  new HashSet <Integer>();
         int next, digit;
         while(n != 1 && isExists.add(n)){
                next = 0;
                while(n > 0){
                        digit = (int)  n %10;
                        next+= digit*digit;
                        n /=10;
                }
                n = next;
                
         }
         return n ==1;
    }
}