public class array {
    public static void main(String []ar) {
    int[] a = {5,6,1,2,4,100};
    int min = 100;
    for (int i = 0; i < a.length; i++) {
        if(a[i] < min){ 
            min = a[i];
        }
    }
    System.out.println(min);
}
}
