public class functions {
    static int add(int a, int b){
        return(a+b);
        // System.out.println("The sum of a and b is :",+a+b);
    };
    static int substract(int a, int b){
        return(a-b);

    };
    static int  multiply(int a , int b){
        return(a*b);
    }
    public static void main(String args[]){
     functions obj= new functions();
       System.out.println("The sum is :"+obj.add(1,2));
       System.out.println("The sub is :"+obj.substract(1,2));
       System.out.println("The multiplication is :"+obj.multiply(1,2));

    }
}
