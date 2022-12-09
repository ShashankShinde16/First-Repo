import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class bIncreasing {
    public static void main(String[] ar) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        Set<Integer> s = new HashSet<>();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                s.add(a[j]);
            }

            if (a.length == s.size()) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            s.clear();
        }
         
    }
}