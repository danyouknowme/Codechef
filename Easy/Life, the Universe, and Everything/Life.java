import java.util.Scanner;

class Life {
	public static void main (String[] args) {
		// your code goes here
		Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
		while (num != 42) {
		    System.out.println(num);
		    num = sc.nextInt();
		}
	}
}
