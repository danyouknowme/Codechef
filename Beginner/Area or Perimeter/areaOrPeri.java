/* package codechef; // don't place package name! */
import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Main {
	public static void main (String[] args) {
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int a, b;
		a = sc.nextInt();
		b = sc.nextInt();
		int area=a*b, peri=2*(a+b);
		if (area > peri) {
		    System.out.println("Area");
		    System.out.print(area);
		} else if (area < peri) {
		    System.out.println("Peri");
		    System.out.print(peri);
		} else {
		    System.out.println("Eq");
		    System.out.print(area);
		}
	}
}
