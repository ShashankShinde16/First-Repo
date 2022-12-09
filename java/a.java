import java.util.Scanner;

public class a {
    public static void main(String[] ar) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-->0) {
            int a = sc.nextInt();
            System.out.println((int)Math.ceil(a/2));
        }
    }
}

