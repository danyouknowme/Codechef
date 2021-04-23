import java.util.Scanner;

class test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str[] = scanner.nextLine().split(" ");
        int n=Integer.parseInt(str[0]), k=Integer.parseInt(str[1]), ans=0;
        for (int i=0; i<n; i++) {
            int t = scanner.nextInt();
            if (t % k == 0) {
                ans++;
            }
        }
        System.out.println(ans);
    }
}
