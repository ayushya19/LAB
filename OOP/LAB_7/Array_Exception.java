package LAB_7;

import java.util.Scanner;

public class Array_Exception {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n1, n2;
        System.out.print("Enter the number of Elements : ");
        n1=sc.nextInt();
        int[] arr=new int [n1];
        for(int i=0; i<n1; i++)
            arr[i]=sc.nextInt();
        IndexOutOfBoundsException A=null;
        do{
            A=null;
            try{
                System.out.print("Enter the index of Elements you want to print : ");
                n2=sc.nextInt();
                    System.out.println(arr[n2]);
            }catch(IndexOutOfBoundsException B){
                A=B;
                System.out.println("Array out of Bounds");
            }            
        }while(A!=null);
    }
}
