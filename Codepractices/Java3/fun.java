class fun2{
    int a,b;
    void add(int a,int b){
        this.a=a; // 'this' keyword is used to refer to the current object
        // It is used to resolve ambiguity between instance variables and parameters with the same name.
        this.b=b;
    }
    void display(){
        System.out.println("Sum is: "+(a+b));
    }

}
public class fun {
    public static void main(String[] args) {
        fun2 obj = new fun2();
        obj.add(5, 10);
        obj.display();
    }
}
