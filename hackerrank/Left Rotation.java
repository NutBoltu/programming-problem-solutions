import java.io.*;
import java.util.*;

public class Solution {

    public int gcd(int a, int b){
        if(b == 0) return a;
        else return gcd(b, a%b);
    }
    
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        Solution s = new Solution();
        
        int n = in.nextInt();
        int d = in.nextInt();
        int[] arr = new int[n];
        
        for(int i =0;i<n;i++) arr[i] = in.nextInt();
        int temp , j, k;
        
        for(int i = 0; i< s.gcd(n, d); i++){
            temp = arr[i];
            j = i;
            while(true){
                k = j+d;
                if(k>=n) k = k-n;
                if(k ==i) break;
                arr[j]= arr[k];
                j = k;
            }
            arr[j]=temp;
        }
        
        for(int i =0;i<n;i++) System.out.print(arr[i]+" ");
    }
}