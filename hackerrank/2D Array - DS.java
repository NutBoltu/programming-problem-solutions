import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int size =6;
        int[][] array = new int[size][size];
        for (int i=0;i< size;i++){
            for(int j=0; j < size; j++) array[i][j] = in.nextInt();
        }
        int max = -180;
        for (int i=0;i< size-2;i++){
            
            for(int j=0; j < size-2; j++){
                int hourglass = array[i][j]+array[i][j+1]+array[i][j+2]
                        +array[i+1][j+1]
                        +array[i+2][j]+array[i+2][j+1]+array[i+2][j+2];
                if(hourglass > max) max = hourglass;
            } 
        }
        
        System.out.println(max);
    }
}