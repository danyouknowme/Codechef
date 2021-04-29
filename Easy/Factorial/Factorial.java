import java.util.Scanner;
import java.lang.Math;

/* Name of the class has to be "Main" only if the class is public. */
class test {
	public static void main (String[] args) throws java.lang.Exception {
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i=0; i<n; i++) {
		    int sum=0;
		    int num = sc.nextInt();
		    while (Math.round(num/5)!=0) {
		        sum += Math.round(num/5);
		        num = Math.round(num/5);
		    }
		    System.out.println(sum);
		}
	}
}
