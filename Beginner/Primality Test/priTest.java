/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main {
	public static void main (String[] args) throws java.lang.Exception {
		// your code goes here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<n; i++) {
            int is_prime=0, num;
            num = sc.nextInt();
            for (int j=1; j<num+1; j++) {
                if (num % j == 0) {
                    is_prime+=1;
                }
            }
            if (is_prime == 2) {
                System.out.println("yes");
            } else {
                System.out.println("no");
            }
	    }
    }
}
    
