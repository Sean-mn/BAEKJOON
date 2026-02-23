using System;

public class Example
{
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        
        if(IsEven(n))
            Console.WriteLine($"{n} is even");
        else
            Console.WriteLine($"{n} is odd");
    }
    
    public static bool IsEven(int n){
        return n%2==0 ? true : false;
    }
}