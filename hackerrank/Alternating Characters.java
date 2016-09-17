import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       int testCase = in.nextInt();
       for(int c =0; c< testCase; c++){
           String s = in.next();
           int i =0, del = 0;
           while(i< s.length()-1){
              int j = i+1;
               while(j<s.length() && s.charAt(i) == s.charAt(j)) {
                    j++;
                    del++;
               }
               i = j;
           }
           System.out.println(del); 
       }
    }
}