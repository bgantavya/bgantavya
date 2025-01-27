
import java.util.Arrays;



public class selectionSort {
    public static void main(String[] args) {
        int[] nums = {123,434,34,2,12,3,23,24,3,43,421,23};
        int[] asc = ascSort(nums);
        int[] desc = descSort(nums);
        // System.out.println(desc);
        System.out.println(Arrays.asList(asc));
    }

    static int[] descSort(int[] nums){
        int n = arr.length;
        for (int i = 0; i < nums.length; i++) {
            if(arr[j] > arr[])
        }
        return new int[] {1,2};
    }
    static int[] ascSort(int[] arr){
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            // Find the index of the minimum element in the unsorted part
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap the found minimum element with the first element of the unsorted part
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
        return arr;

    }

