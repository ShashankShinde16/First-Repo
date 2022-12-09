import java.util.Arrays;

public class cyclicSort {
    public static void main(String[] arg){
         int[] arr = {3,-1,1,4};
         sort(arr);
         System.out.println(Arrays.toString(arr));
         System.out.println(missing(arr));
}
    static int duplicate(int arr[]){
         for (int i = 0; i < arr.length; i++) {
            if(arr[i]!=i+1){
                return i+1;
            }
         }
        return -1;
    }    

    static int missing(int arr[]){
         for (int i = 0; i < arr.length; i++) {
            if(arr[i]!=i+1){
                return i+1;
            }
         }
        return -1;
    }

    static void sort(int arr[]){
        int i = 0;
       while(i < arr.length){
        int correct = arr[i]-1;
        if (arr[i] > 0 && arr[i] != arr[correct]) {
            swap(arr,correct,i);
        }else{
            i++;
        }
       }
    }

    static void swap(int []arr,int correct,int i){
        int temp = arr[correct];
        arr[correct] = arr[i];
        arr[i] = temp;
    }
}
