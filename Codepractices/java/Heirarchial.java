class One{
    int add(int a , int b ){
        return a + b;
    }

}
class Two extends One {
    int subs(int a , int b ){
        return a - b;
    }
}
public class Heirarchial extends Two {
    public static void main (String [] args){
        Two obj= new Two();
        int result1 = obj.add(4, 5);
        System.out.println("The result is: " + result1);
        int result2 = obj.subs(4, 5);
        System.out.println("The result is: " + result2);

    }
}
