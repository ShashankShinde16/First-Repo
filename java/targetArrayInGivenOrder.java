import java.util.ArrayList;
import java.util.Arrays;
public class targetArrayInGivenOrder {
    public static void main(String[] rg) {
        int[] a = {2,3,4,5,0};
        int[] b = {0,1,2,1,0};
        // Arrays.sort(b);
        ArrayList<Integer> arr = new ArrayList<>();
        // arr.add(b[0], a[0]);
        // arr.add(b[1],a[1]);
        // arr.add(b[2], a[2]);
        // arr.add(b[3],a[3]);
        // arr.add(b[4], a[4]);
        for (int i = 0; i < b.length; i++) {
            arr.add(b[i], a[i]);
        }
        for (int i = 0; i < a.length; i++) {
            a[i] = arr.get(i);
        }
            System.out.print(Arrays.toString(a));
        }
    
}

// import java.util.*;
// class Solution {
//     public int[] createTargetArray(int[] nums, int[] index) {
//         ArrayList<Integer> arr = new ArrayList<>();
//         for (int i = 0; i < index.length; i++) {
//             arr.add(index[i],nums[i]);
//         }
//         for (int i = 0; i < nums.length; i++) {
//             nums[i] = arr.get(i);
//         }
//         return nums;
//     }
// }