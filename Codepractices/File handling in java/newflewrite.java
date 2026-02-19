import java.io.FileWriter;
import java.io.IOException;
public class newflewrite {
    public static void main(String args[]){
    try{
        FileWriter obj = new FileWriter("Myfile2.txt");
        obj.write("HI! , I am file 2");
        obj.close();
        System.out.println("Successfully wrote to the file");

    }
    catch(IOException e){
        System.out.println("An error occured");
        e.printStackTrace();
    }
}
}
