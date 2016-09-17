import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public boolean isBalanced(String s){
           
           Stack<Integer> brackets = new Stack<Integer>(); 
           
           for(int i =0;i< s.length(); i++){
               char ch = s.charAt(i);
               if(ch == '(') brackets.push(0);
               else if(ch == '{') brackets.push(1);
               else if(ch == '[') brackets.push(2);
               else if(ch == ')'){
                  if(brackets.empty() || brackets.peek() !=0) return false;
                  else brackets.pop();
               }
               else if(ch == '}'){
                   if(brackets.empty() || brackets.peek() !=1) return false;
                  else brackets.pop();
               }
               else if(ch == ']'){
                   if(brackets.empty() || brackets.peek() !=2) return false;
                  else brackets.pop();
               }
           }
           
         if(!brackets.empty()){
             return false;
         }  
            
         return true;
     }
    
    public static void main(String[] args) {
        // TODO code application logic here
            Scanner in = new Scanner(System.in);
            Solution sol = new Solution();
            int t = in.nextInt();
            
            for(int a0 = 0; a0 < t; a0++){
                    String s = in.next();
                    if(sol.isBalanced(s)) System.out.println("YES");
                    else System.out.println("NO");
            }
        
    }
}
