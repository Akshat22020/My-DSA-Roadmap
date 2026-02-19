import java.util.Scanner;
public class AdditionuI {
    public static void main(String[]args){
        System.out.println("Hii:");
        Scanner Obj=new Scanner(System.in);  // Create a Scanner object
        System.out.println("Enter first number:");
        int a=Obj.nextInt();  // Read user input
        System.out.println("Enter second number:");
        int b=Obj.nextInt();  // Read user input
        int c=a+b;
        System.out.println("Addition is: "+c);  // Output user input
        System.out.println("====program executed==== ");

    }
}
