namespace CodingTest;

class Program
{
    static void Main(string[] args)
    {
        int[] arr = new int[9];
        for (int i = 0; i < arr.Length; i++)
            arr[i] = int.Parse(Console.ReadLine());
        
        int max = arr[0];
        int idx = 0;

        for (int j = 0; j < arr.Length; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                idx = j;
            }
        }
        
        Console.WriteLine(max);
        Console.WriteLine(idx+1);
    }
}