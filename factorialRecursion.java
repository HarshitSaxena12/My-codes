package Recursion;
public class factorialRecursion {

    static int factorial(int n){

        if(n==0){
            return 1;
        }

        return factorial(n-1)*n;
    }

    public static void main(String[] args) {
        int shet=factorial(3);
        System.out.println(shet);
    }

}


