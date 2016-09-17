public class Solution {
    public int dividedByX(int a, int x){
    
        while(a%x ==0){
            a /=x;
        } 
        
        return a;
    }
    public boolean isUgly(int num) {
            if(num == 0) return false;
            num = dividedByX(num, 2);
            num = dividedByX(num, 3);
            num = dividedByX(num, 5);
            return num ==1;
    }
}