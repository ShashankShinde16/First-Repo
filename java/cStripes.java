import java.util.Scanner;

public class cStripes {
    public static void main(String[] ar) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            String[] a = new String[8];
            for (int j = 0; j < 8; j++) {
                a[j] = sc.next();
            }
            int c = 0;
            for (int j = 0; j < 8; j++) {
                if (a[j].contains("B")) {
                    c++;
                }
            }
            if (c == 8) {
                System.out.println("B");
            } else {
                System.out.println("R");
            }

        }
    }
}
