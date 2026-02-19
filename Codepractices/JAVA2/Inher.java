class A{
    int add(int a , int b){
        return a+b;

    }
    int sub(int a , int b){
        return a-b;
    }
}
class B extends A{
     int div(int a , int  b ){
        return a/b;
     } 
}
public class Inher extends B{
    public static void main(String[]args){
     B obj= new B();
     int result_1=obj.add(3,4);
     int result_2= obj.sub(6,5);
     int result_3=obj.div(10,2);
     System.out.println("The sum is: "+result_1);
     System.out.println("The Sub is: "+result_2);    
     System.out.println("The Div  is: "+result_3);

    }
}