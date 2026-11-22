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

class program123
{
    public static void main(String A[]) 
    {
        Digit digit = new Digit();

        digit.DisplayDigits(9752);
    }
} 
    



