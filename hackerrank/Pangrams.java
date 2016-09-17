import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
        int[] alphabets = new int[26]; 
        String s = in.nextLine();
        int index; 
       for(int i =0; i<s.length(); i++){
           char ch = s.charAt(i); 
           if(ch>='A' && ch<= 'Z'){
               index = (int)(ch-'A');
               alphabets[index]++;
           }
           else if(ch>='a' && ch<= 'z'){
               index = (int)(ch-'a');
               alphabets[index]++;
           }
       }
       boolean isPangram = true;
       for(int i =0; i<26; i++){
           if(alphabets[i] == 0){
               isPangram = false;
               break;
           }
       }  
       if(isPangram){
           System.out.println("pangram");
       }  
       else  System.out.println("not pangram");        
                   
    }
}