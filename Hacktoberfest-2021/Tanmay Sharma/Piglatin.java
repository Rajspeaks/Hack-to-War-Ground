import java.util.*;
public class Piglatin
{
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the word to be converted.");
        String word=ob.next();
        word=word.toUpperCase();
        String piglatin="";
        int flag=0;
        for(int i=0;i<word.length();i++)
        {
            char x=word.charAt(i);
            if(x=='A' || x=='E' || x=='I' || x=='O' ||x=='U')
            {
                piglatin=word.substring(i)+word.substring(0,i)+"AY";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            piglatin=word+"AY";
        }
        System.out.println(word+" in Piglatin format is "+piglatin);
    }
}

/* Enter the word to be converted.
Hello world
HELLO in Piglatin format is ELLOHAY 
Made By: Tanmay Sharma */

