package Recursion;

public class arrSorted {
    static boolean sorted(int [] arr,int index) {
        if (arr.length -1 == index) {
            return true;

        }
        if (arr[index]==arr[index+1]){
            return false;
        }
        return sorted(arr, index + 1);
    }

    public static void main(String[] args) {
        int []arr={1,2,4,8,9};
        boolean result= sorted(arr,0);
        System.out.println(result);

    }

}
