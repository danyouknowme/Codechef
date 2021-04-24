/* package codechef; // don't place package name! */
import java.util.Scanner;
import java.util.Arrays;

/* Name of the class has to be "Main" only if the class is public. */
class SmallestPair {
	public static void main (String[] args) throws java.lang.Exception {
		// your code goes here
	    Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    for (int i=0; i<n; i++) {
	        int arr_sz = sc.nextInt();
	        int arr[] = new int[arr_sz];
	        for (int j=0; j<arr_sz; j++) {
	            arr[j] = sc.nextInt();
	        }
            Arrays.sort(arr);
            System.out.println(arr[0]+arr[1]);
	    }
	}
}
