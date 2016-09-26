package LAB_6;

import java.util.Scanner;

interface HCL{
    public void input();
    public void print();
}

class Hardware implements HCL{ 
    String c="Camera",
            m="GoPro";
    int n;
    Hardware(){
        n=0;
    }
    Hardware(int a){
        n=a;
    }
    

    @Override
    public void input(){
        n++;
    }

    @Override
    public void print(){
        System.out.println("Category:" + c);
        System.out.println("Manufacture:" + m);
        System.out.println("No. of units Sold : " + n);
    }
}

class Software implements HCL{
    String t="SDK",
            o="Linux";
    int n;
    Software(){
        n=0;
    }
    Software(int a){   
        n=a;
    }

    @Override
    public void input(){
        n++;
    }

    @Override
    public void print(){
        System.out.println("Type:" + t);
        System.out.println("OS:" + o);
        System.out.println("No. of units Sold : " + n);
    }
}

class Company{
    public static void main(String arg[]){
        Scanner sc=new Scanner(System.in);
        Hardware h[]=new Hardware[12];
        Software s[]=new Software[12];
        int a=0, m=0;
        
        for(int i=0; i<12; i++)
        {
            h[i]=new Hardware();
            s[i]=new Software();
        }
        
        while(a!=4){
            System.out.println("1.Hardware \n2.Software \n3.Sales Record");
            a=sc.nextInt();
            
            switch (a)
            {
                case 1: System.out.println("Enter the Month Hardware was Sold.");
                        m=sc.nextInt();
                        h[m-1].input();                
                        break;
            							 
                case 2: System.out.println("Enter the Month Hardware was Sold.");
                        m=sc.nextInt();
                        s[m-1].input();
                        break;
                        
                case 3: System.out.println("Enter the Month");
                        m=sc.nextInt();
                        h[m].print();
                        s[m].print();
                        break;
            }            
        }
        System.out.println("Sales of Last 3 Months : ");
        int hn=0,sn=0;
        for(int i=9; i<12; i++)
        {
            hn+=h[i].n;
            sn+=s[i].n;
        }

        Hardware h1=new Hardware(hn);
        h1.print();
        Software s1=new Software(sn);
        s1.print();
    }
}
