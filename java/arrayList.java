import java.util.ArrayList;
import java.util.List;

public class arrayList {
    public static void main(String[] ar) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(10);
        arr.add(20);
        System.out.println(arr);   
        arr.remove(Integer.valueOf(20));   
        System.out.println(arr);  
        arr.clear();
        System.out.println(arr); 
        arr.add(10);
        System.out.println(arr); 
        arr.set(0, 20);
        System.out.println(arr); 
        System.out.println(arr.get(0));

        int[] a = new int[]{5,10,20,30,40};
        List<Integer> arr1 = new ArrayList<>();
        for (int i = 0; i < a.length; i++) {
            if (a[i] != 20) {
                arr1.add(a[i]);
            }
        }
        System.out.println(arr1);
        }
}
