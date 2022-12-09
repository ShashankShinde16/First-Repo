
public class stringP {
    public static void main(String[] args) {
        String name = "s";
        String ne = "0";
        System.out.println(name.compareTo(ne));
    }
    public static String convert(String s) {
        return s.replace(" ", "[-");
    }
}
