import java.util.HashMap;
import java.util.Map;

public class hashMapping {
    public static void main(String[] ar) {
        Map<Integer,String> num = new HashMap<>();
        num.put(1, "one");
        num.put(2, "two");
        num.put(3, "three");
        System.out.println(num.containsKey(5));
        System.out.println(num.containsValue("three"));
    for (Map.Entry<Integer,String> e : num.entrySet()) {
        System.out.println(e);
        System.out.println(e.getKey());
        System.out.println(e.getValue());
    }
    }
}
