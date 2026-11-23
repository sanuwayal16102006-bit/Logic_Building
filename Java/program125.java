import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int ino)
    {
        int iDigit = 0;
                if(ino < 0)
                {
                    ino = -ino;
                }

                while(ino != 0)
                {
                  iDigit = ino% 10;   
                  ino = ino/10;    
                  System.out.println(iDigit);    
                }
        
    }
}

class program125
{
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter number:");
        int iValue = scanner.nextInt();

        digit.DisplayDigits(iValue);
    }
} 
    



