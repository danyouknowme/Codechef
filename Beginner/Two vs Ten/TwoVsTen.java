import java.util.Scanner;

public class TwoVsTen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<n; i++) {
            int x = sc.nextInt();
            if (x % 10 == 0) {
                System.out.println("0");
            } else if (x % 5 == 0) {
                System.out.println("1");
            } else {
                System.out.println("-1");
            }
        }
    }
}
