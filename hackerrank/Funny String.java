import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
        String str; 
        int t   =  in.nextInt();
        
         while(t>0){
             str = in.next();
             boolean isFunny = true;
             int len = str.length(), left, right;
             for(int i = 0; i< len/2; i++ ){
                 left = Math.abs((int) str.charAt(i) -  (int) str.charAt(i+1));
                 right = Math.abs((int) str.charAt(len-i-1) -  (int) str.charAt(len-i-2));
                 if(left != right) {
                     isFunny = false;
                     break;
                 }
             }
             if(isFunny)   System.out.println("Funny");
                     else  System.out.println("Not Funny");
                     
             t--;
         }
    }
}