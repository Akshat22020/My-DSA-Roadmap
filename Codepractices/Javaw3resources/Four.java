public class Four {
    public static int Factorial(int n){
        if (n==0){
      return(1);}
      else {
        return(n*Factorial(n-1));
      }
    }
    public static void main(String args[]){
        int fac=6;
        int factorial = Factorial(fac);
     System.out.println("This is the factorial program");
     System.out.println("The factorial of the number:"+fac+"is:"+factorial);
}
}
