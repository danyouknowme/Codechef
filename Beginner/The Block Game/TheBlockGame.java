/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
	public static void main (String[] args) throws java.lang.Exception {
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i=0; i<n; i++) {
		    int num = sc.nextInt();
		    int temp=num, rev=0;
		    while (num > 0) {
		        int dig;
		        dig = num%10;
		        rev = rev*10+dig;
		        num = Math.round(num/10);
		    }
		    if (rev == temp) {
		        System.out.println("wins");
		    } else {
		        System.out.println("loses");
		    }
		}
	}
}
