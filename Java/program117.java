import java.util.Scanner;

class program117
{
    public static void main(String A[]) 
    {
        int ino = 7592;

        System.out.println("Number is :"+ino);    //7592

        System.out.println(ino % 10);    //2
        ino = ino/10;    //759
        System.out.println("Number is :"+ino);    //759

        System.out.println(ino % 10);    //9
        ino = ino/10;    //75
        System.out.println("Number is :"+ino);    //75

        System.out.println(ino % 10);    //5
        ino = ino/10;    //7
        System.out.println("Number is :"+ino);    //7

        System.out.println(ino % 10);    //7
        ino = ino/10;    //0
        System.out.println("Number is :"+ino);    //0
    }
} 
    

