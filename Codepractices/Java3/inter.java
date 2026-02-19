public class inter implements Lovely{
    public void show(){
        System.out.println("Hello World");
    }
    public static void main(String[] args) {
        inter obj = new inter();
        obj.show();
    }
} 


interface Lovely{
    void show();

}
