/* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Amb_Permu {
	public static void main (String[] args) throws java.lang.Exception {
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while (n!=0) {
		    int[] arr = new int[n], num = new int[n], zeros = new int[n];
		    for (int i=1; i<n+1; i++) {
		        int number = sc.nextInt();
		        arr[i-1] = number;
		        num[i-1] = i;
		        zeros[i-1] = 0;
		    }
		    for (int j=0; j<n; j++) {
		        zeros[arr[j]-1] = num[j];
		    }
		    boolean check=true;
		    for (int k=0; k<n; k++) {
		        if (arr[k] != zeros[k]) {
		            check=false;
		        }
		    }
		    if (check) {
		        System.out.println("ambiguous");
		    } else {
		        System.out.println("not ambiguous");
		    }
		    n = sc.nextInt();
		}
	}
}
