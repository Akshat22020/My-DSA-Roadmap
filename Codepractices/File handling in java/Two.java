import java.io.IOException;
import java.io.FileWriter;
public class Two{
    public static void main(String args[]){
try{
    // File obj= new File("MyFile2.txt");
    FileWriter mywrite = new FileWriter("MyFile2.txt");
    mywrite.write("File writing in java is very easy");
    mywrite.close();
}
catch(IOException e){
System.out.println(e);
e.printStackTrace();
}
    }
}

