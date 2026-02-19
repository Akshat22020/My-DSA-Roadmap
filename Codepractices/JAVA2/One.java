import java.io.FileWriter;
import java.io.IOException;
public class One {
    public static void main(String args[]){
    try{
        FileWriter obj= new FileWriter("Text.txt");
       obj.write("Welcome to my file");
       obj.close();
    }
    catch(IOException e){
        System.out.println(e);
        e.printStackTrace();
    }
}
}
