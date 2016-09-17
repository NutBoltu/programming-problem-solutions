public class Solution {
       public boolean isPowerOfThree(int num) {
        if (num == 0) {
            return false;
        }
        while (num % 3 == 0) {
            num /= 3;
        }
        return num == 1;
    }
}