import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
public class Main {
	public static void main (String[] args) {
		// your code goes here
		Scanner scanner = new Scanner(System.in);
		int withdraw;
		float balance;
		withdraw = scanner.nextInt();
		balance = scanner.nextFloat();
		if (withdraw % 5 == 0 && (withdraw+0.5 <= balance)) {
		    balance -= (withdraw+0.5);
		}
		System.out.printf("%.2f", balance);
	}
}
