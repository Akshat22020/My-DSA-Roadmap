import java.util.Scanner;
public class Valueuser {
    public static void main(String args[]){
        System.out.println("Hi!");
        Scanner Obj = new Scanner(System.in);  // Create a Scanner object
        System.out.println("Enter username");
    
        String userName = Obj.nextLine();  // Read user input
        System.out.println("Username is: " +userName);  // Output user input
      }
    }
  
