package LAB_7;

import java.util.Scanner;

public class Number_Exception {
    public static void main(String[] args) {
        int a=0;
        Scanner sc=new Scanner(System.in);
         NumberFormatException A=null;
        do{
            A=null;
            try{
                a=Integer.parseInt(sc.next());
            }catch (NumberFormatException B){
                A=B;
//                System.out.println(B);
                System.out.println("Invalid conversion from String.");
            }
        }while(A!=null);
//        System.out.println(a);
    }
}
