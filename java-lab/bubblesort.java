/**
 * bubblesort
 */
public class bubblesort {
     public static void printarr(int[] arr) {
         for (int i = 0; i < arr.length; i++) {
             System.out.println(arr[i]+" ");
         }
         System.out.println();
     }
    public static void main(String[] args) {
        

        int arr[] = {7,8,1,2,3};
        
        for (int i = 0; i < arr.length-1; i++) {
            System.out.println();
            for (int j = 0; j < arr.length-i-1; j++) {
                if (arr[j]>arr[j+1]) {

                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1 ]=temp;


                }
            }
        }printarr(arr);
        
    }
}