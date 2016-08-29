import java.util.Scanner;

class Rectangle {

    public static void main(String[] args) {
        int len, bre;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Length of the Rectangle");
        len=sc.nextInt();
        System.out.println("Enter the Breadth of the Rectangle");
        bre=sc.nextInt();
        
        System.out.println("Perimeter of the Rectangle is : " + (2*(len+bre)));
        System.out.println("Area of the Rectange is : " + (len*bre));
    }
    
}
