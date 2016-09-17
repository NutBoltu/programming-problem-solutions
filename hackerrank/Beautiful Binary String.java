import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String s = in.next();
        int beautiful = 0; 
        if(N>=3){
            int i = 0;
            while(i<N-2){
                char ch1 = s.charAt(i);
                char ch2 = s.charAt(i+1);
                char ch3 = s.charAt(i+2);
                if(ch1 == '0' && ch2 == '1' && ch3 == '0'){
                  beautiful++;
                  i +=3;  
                }else i++; 
            }
        }
        System.out.println(beautiful);
    }
}