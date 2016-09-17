import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

   public int largestRect(int[] hist){
        
            int max = 0, small, area;
            Stack<Integer> s = new Stack<>();
            
            int i =0;
            
            while(i<hist.length){
                   
                    if(s.empty() || hist[s.peek()]  <= hist[i]){
                        s.push(i++);
                    }
                    else{
                          small = s.peek();
                          s.pop();
                          area = hist[small] * (s.empty() ? i : i - s.peek() -1);
                          if(area > max) max = area;
                    }
                    
            }
            while(!s.empty()){
                    small = s.peek();
                          s.pop();
                          area = hist[small] * (s.empty() ? i : i - s.peek() -1);
                          if(area > max) max = area;
            
            }
            return max;
    };
    
    public static void main(String[] args) {
        // TODO code application logic here
            Scanner in = new Scanner(System.in);
            Solution sol = new Solution();
            int t = in.nextInt();
            
            int[] hist = new int[t]; 
            
            for(int a0 = 0; a0 < t; a0++){
                    hist[a0] = in.nextInt();
            }
               System.out.println(sol.largestRect(hist)); 
        
    }
    
}