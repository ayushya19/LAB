package LAB_7;

import java.util.Scanner;

public class Student_Exception {
    public static void main(String[] args) {
        Scanner sc=new Scanner (System.in);
        Exception e=null;
        do{
            e=null;
            try{
                String name=sc.nextLine();
                int roll_no=Integer.parseInt(sc.next());
                int[] arr=new int[3];
                for(int i=0; i<3; i++)
                    arr[i]=Integer.parseInt(sc.next());
                double per=(arr[0]+arr[1]+arr[2])/3.0;
                char grade='F';
                if(per>85)  grade='A';
                else if(per<=85 && per>=75)  grade='B';
                else if(per<=85 && per>75)  grade='C';
                else if(per<=75 && per>65)  grade='D';
                else if(per<=65)  grade='D';
                System.out.println("Name : " + name);
                System.out.println("Roll No : " + roll_no);
                System.out.println("Percentage : " + per);
                System.out.println("Grade : " + grade);
            }
            catch(NumberFormatException B){
                e=B;
                System.out.println("Invalid Conversion to Number.");
            }
        }while(e!=null);
    }    
}
