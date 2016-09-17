public class Solution {
    public int numberOfBit(int num) {
        int bit = 0;
        while (num > 1) {
            num >>= 1;
            bit++;
        }
        return bit;
    }

    public boolean isPowerOfFour(int num) {
        return num > 0 && (num & num - 1) == 0 && (numberOfBit(num) % 2) == 0;
    }
}