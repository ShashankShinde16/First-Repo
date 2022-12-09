import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class set {
    public static void main(String[] ar) {
        Set<Integer> arr = new HashSet<>();//HashSet - it remove duplication,and arrange elements randomly
        arr.add(20);
        arr.add(5);
        arr.add(4);
        arr.add(30);
        arr.add(1);
        System.out.println(arr);
        
        Set<Integer> arr1 = new LinkedHashSet<>();//LinkedHashSet - it remove duplication,and arrange elements input wise
        arr1.add(20);
        arr1.add(4);
        arr1.add(5);
        arr1.add(30);
        arr1.add(1);
        System.out.println(arr1);
              
        Set<Integer> arr2 = new TreeSet<>();//TreeSet - it remove duplication,and arrange elements in sorted order
        arr2.add(20);
        arr2.add(4);
        arr2.add(5);
        arr2.add(30);
        arr2.add(1);
        System.out.println(arr2);
    }
}
