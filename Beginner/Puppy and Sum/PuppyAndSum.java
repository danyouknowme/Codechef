import java.util.Scanner;

public class PuppyAndSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int ans=0;
            for (int j=0; j<a; j++) {
                ans = (b*(b+1))/2;
                b = ans;
            }
            System.out.println(ans);
        }
    }
}
