// import java.util.Arrays;

public class MdArray {
    public static void main(String[] args) {
        int[][] arr = { { 2, 3, 5 },
                        { 5, 9, 4 } };
        int[][] a = new int[arr[0].length][arr.length];

        for (int i = 0; i < a[i].length; i++) {
            for (int j = 0; j < a.length; j++) {
                a[j][i] = arr[i][j];
            }
        }
        for (int i = 0; i < a.length; i++) {
        for (int j = 0; j < a[i].length; j++) {
        System.out.print(a[i][j] + " ");
    }
    System.out.println();
}
    }
}
