import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] v = new int[n];
        for(int i = 0 ; i < n; i++){
            v[i] = sc.nextInt();
        }
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += v[j];
                if(sum < 0)
                    cnt ++;
            }
        }
        System.out.println(cnt) ;
    }
}

