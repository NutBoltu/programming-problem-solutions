import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Solution s = new Solution();
        
        int N = Integer.parseInt(in.nextLine());
        String[] givenStrings = new String[1000];
        
        for(int i =0;i< N; i++){
            givenStrings[i] = in.nextLine();
        }
        
        int Q = Integer.parseInt(in.nextLine());
        int numberofOccurrence;
        for(int i = 0;i< Q; i++){
            String query = in.nextLine();
            numberofOccurrence = 0;
            for(int j =0; j<N; j++){
              if(query.equals(givenStrings[j])) numberofOccurrence++;  
            }
            System.out.println(numberofOccurrence);
        }
    }
}