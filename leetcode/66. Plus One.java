public class Solution {
    public int[] plusOne(int[] digits) {
        int carry = 1,temp; 
        for(int i = digits.length -1; i>=0;i--){
            temp = (digits[i]+carry)%10;
            carry = (int)(digits[i]+carry)/10;
            digits[i] = temp;
        }
        if(carry != 0){
            int[] res = new int [digits.length+1];
            res[0] = carry;
            System.arraycopy(digits, 0, res, 1, digits.length );
            return res;
        }
        
        return digits;
    }
}