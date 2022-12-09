public class Bitwise {
    public static void main(String[] arg) {
        // non duplicate number
        int[] ar = {2,1,2,4,1,3,3};
        int xor = 0;
        for (int i = 0; i < ar.length; i++) {
             xor ^= ar[i];
        }       
         System.out.println(xor);


        //  ith bit of a number
        int a = 101001;
        int i = 3;
        if((a & (1 << (i-1))) == 0){
            System.out.println(0);
        }else{
            System.out.println(1);
        }

        // set ith bit of a number
    }

    // number in binary
    static String toBinary(int n)
    {
        if (n == 0) {
            return "";
        }
 
        return toBinary(n / 2) + (n % 2);
    }
 
}
