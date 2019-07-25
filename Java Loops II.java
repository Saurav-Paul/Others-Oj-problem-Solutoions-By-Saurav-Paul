import java.util.Scanner;

public class Solution {
	static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) {
           
           int testcase = sc.nextInt();
           while(testcase > 0){
			   testcase--;
			   solve();
		   }
    }
    public static void solve(){
		int a , b, n;
		a = sc.nextInt();
		b = sc.nextInt();
		n = sc.nextInt();
		
		for(int i = 1 ; i <= n ; i++){
			int sum = a;
			int pow = 1;
			for(int j = 0 ; j < i ; j++){
				sum += (b*pow);
				pow *= 2;
			}
			System.out.print(sum+" ");
		}
		System.out.println("");
	}
}



