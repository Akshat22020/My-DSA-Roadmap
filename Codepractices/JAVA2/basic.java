class A{
    public void Animalsound(){
        System.out.println("This is the animal's sound: trr! trr!");
    }

}
class B extends A{
    public void Animalname(){
        System.out.println("Hii the animal is a frog!");

    }
}
public class basic extends B {
    public static void main(String args[]){

    B obj=new B();
    obj.Animalname();


    
}}
