import java.util.Scanner;

class Digit
{
    public int CountDigits(int ino)
    {
        int iDigit = 0;
        int iCount = 0;

                if(ino < 0)
                {
                    ino = -ino;
                }

                while(ino != 0)
                {
                  iDigit = ino % 10;   
                  ino = ino / 10;   
                  iCount++;    
                }
                return iCount;
        
    }
}

class program126
{
    public static void main(String A[]) 
    {
        Scanner scanner = new Scanner(System.in);
        int iret = 0;
        Digit digit = new Digit();

        System.out.println("Enter number:");
        int iValue = scanner.nextInt();

        iret = digit.CountDigits(iValue);

        System.out.println("Number of Digits :"+iret);
    }
} 
    




