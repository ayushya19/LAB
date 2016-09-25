package LAB_5;

import java.util.Scanner;

class Bank
{
    int getRateOfInterest()
    {
        return 0;
    }
}

class SBI extends Bank
{
    @Override
    int getRateOfInterest()
    {
        return 8;
    }
}

class ICICI extends Bank
{
    @Override
    int getRateOfInterest()
    {
        return 7;
    }
}

class AXIS extends Bank
{
    @Override
    int getRateOfInterest()
    {
        return 9;
    }
}

class Bank_Test 
{
    public static void main(String[] args) 
    {
        Bank b=new Bank();
        SBI s= new SBI();
        ICICI i=new ICICI();
        AXIS a=new AXIS();
        
        Bank x;
        x=b;
        System.out.println("Bank Interest is " + x.getRateOfInterest()+"%");
        
        x=s;
        System.out.println("SBI Bank Interest is " + x.getRateOfInterest()+"%");
        
        x=i;
        System.out.println("ICICI Bank Interest is " + x.getRateOfInterest()+"%");
        
        x=a;
        System.out.println("AXIS Bank Interest is " + x.getRateOfInterest()+"%");
    }   
}
