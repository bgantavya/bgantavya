import java.util.*;
public class search{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[] arr = {1,2,3,5,6,28,6,2,12,46,88};
        Arrays.sort(arr);
        int high = arr.length;
        int low = 0;
        int target = sc.nextInt();
        while(high>low){
            int mid = (high+low)/2;
            if(arr[mid]==target){
                System.out.print(mid+ " : " +arr[mid]);
                break;
            } 
            else if(arr[mid] < target) low = mid +1;
            else if(arr[mid] > target) high = mid -1;
        }
    }
}