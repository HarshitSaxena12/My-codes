package Recursion;

import java.io.InputStream;

public class CallStack {

    public CallStack(InputStream in) {
    }

    void function_1(){

        System.out.println("x:This is function_1");
    }

    void function_2(){
        function_1();

        System.out.println("x:This is function_2");

    }

    public void  function_3(){
        function_2();

        System.out.println("x: This is function_3");

    }

    public static void main(String [] args){

        CallStack obj=new CallStack(System.in);
        obj.function_3();
    }


}
