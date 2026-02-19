
public class excep {
    public static void main(String[] args) {
        try {
            int a = 5, b = 0;
            int c = a / b; // This will cause an ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException caught: " + e.getMessage());
            e.printStackTrace();
        } finally {
            System.out.println("Finally block executed.");
        }
    }
    
}
