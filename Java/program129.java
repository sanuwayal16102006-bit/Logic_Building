import java.util.Scanner;

class Digit
{
    public int SumDigits(int ino)
    {
        int isum = 0;

                if(ino < 0)
                {
                    ino = -ino;
                }

                while(ino != 0)
                {  
                  isum = isum + (ino % 10);
                  ino = ino / 10;      
                }
                
                return isum;
        
    }
}

class program129
{
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);
        int iret = 0;
        Digit digit = new Digit();

        System.out.println("Enter number:");
        int iValue = scanner.nextInt();

        iret = digit.SumDigits(iValue);

        System.out.println("Summation of Digits :"+iret);
    }
} 
    




