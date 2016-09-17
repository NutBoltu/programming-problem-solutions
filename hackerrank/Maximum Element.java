import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
          Stack<Integer>  numbers = new Stack<Integer>();
            Stack<Integer> maxElement = new Stack<Integer>();
           
            Scanner in = new Scanner(System.in);
            
            int N = in.nextInt();
           
            while(N>0){
                 int type = in.nextInt();
                 switch(type){
                     
                        case 1:
                            int x = in.nextInt();
                            numbers.push(x);
                            if(maxElement.empty() ||  numbers.peek() >=  maxElement.peek() ) {
                                    maxElement.push(x);
                            }
                            break;
                        case 2:
                            if(!maxElement.empty() && Objects.equals(numbers.peek(), maxElement.peek())){
                                    maxElement.pop();
                            } 
                            numbers.pop();
                            break;
                        case 3:
                            System.out.println(maxElement.peek());
                            break;
                            
                 
                 }
                N--;
            }
    }
}