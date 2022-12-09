import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class collectionClass {
    public static void main(String[] ar) {
        int fre = 0;
        List<Integer> a = new ArrayList<>();
        a.add(50);
        a.add(2);
        a.add(10);
        a.add(12);
        a.add(50);
        // System.out.println(Collections.min(a));
        // System.out.println(Collections.max(a));
        // System.out.println(Collections.frequency(a, 50));
        for (int i = 0; i < a.size(); i++) {
            // fre = Collections.frequency(a, i);
            System.out.println(Collections.frequency(a, a.get(i)));
            fre = a.get(i);
        }
        System.out.print(fre);
    }
}
