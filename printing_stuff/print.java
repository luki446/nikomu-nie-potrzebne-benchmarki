public class print
{
    public static void main(String[] args)
    {
        for(int i = 0; i < Integer.parseInt(args[0]); i++)
        {
            System.out.print("Hello World " + i + "\n");
        }
    }
}