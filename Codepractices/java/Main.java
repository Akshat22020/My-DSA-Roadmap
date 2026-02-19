public class Main 
{
    public static void main(String args []) 
	{
        if (args.length <= 2) 
		{
            System.out.println("Please provide two numbers as command-line arguments.");
     
        double num1 = Double.parseDouble(args[0]);
        double num2 = Double.parseDouble(args[1]);

        double sum = num1 + num2;
        System.out.println("Sum: " + sum);
	}
}
}
