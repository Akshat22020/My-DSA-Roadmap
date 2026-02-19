public class exceptionhand {
    public static void main(String args[]){
        int a[]={1,2,3,4,5,6,7,8,9,10};
       try{
        System.out.println("Array element at index 10 is: " + a[10]);
       }
       catch(Exception e){
        System.out.println("Array index out of bounds: " + e);
       }

       finally{
        System.out.println("This block always executes.");
       }
       
    
    }
}
