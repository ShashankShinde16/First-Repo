import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
public class dCoprime {
    public static void main(String[] ar) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        Set<Integer> s = new HashSet<>();
        ArrayList<Integer> y = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            for (int j = 0; j < n; j++) {
                a[j] = sc.nextInt();
                if(isPrime(j) == true){
                    s.add(j);
                    System.out.println(j);
                }
            }
            for (int j = 1; j <= n; j++) {
                if(isPrime(j) == true){
                    s.add(j);
                    System.out.println(j);
                }
            }
            y.addAll(s);
            if(y.isEmpty() || y.size() == 1){
                System.out.println("-1");
            }else{
                System.out.println(a[y.get(y.size()-1)]+a[y.get(y.size()-2)]);
            }
        }

    }
    static boolean isPrime(int n)
    {
        if (n <= 1)
            return false;
 
        // Check if number is 2
        else if (n == 2)
            return true;
 
        // Check if n is a multiple of 2
        else if (n % 2 == 0)
            return false;
 
        // If not, then just check the odds
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
