import java.util.Scanner;


class Digit
{
    public void DisplayDigits(int ino)
    {
        int iDigit = 0;

                while(ino != 0)
                {
                  iDigit = ino% 10;   
                  ino = ino/10;    
                  System.out.println(iDigit);    
                }
        
    }
}

class program124
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
    



