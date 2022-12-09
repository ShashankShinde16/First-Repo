import java.util.Arrays;

public class arrayClass {
    public static void main(String[] shashank) {
        int[] a = { 5, 1, 2, 4, 3 };
        Arrays.sort(a);
        System.out.println(Arrays.binarySearch(a, 4));
        for (int i : a) {
            System.out.print(i + " ");
        }
        Arrays.fill(a, 0);
        for (int i : a) {
            System.out.print(i + " ");
        }
    }
}
