import java.io.File;
import java.io.IOException;
import java.util.Scanner;
public class Three {
    public static void main(String args[]){
        try{
            File obj=new File("MyFile2.txt");
            Scanner myReader=new Scanner(obj);
            while(myReader.hasNextLine()){
                String data=myReader.nextLine();
                System.out.println(data);
            }
            myReader.close();
        }
       
        catch(IOException e){
            System.out.println(e);
            e.printStackTrace();
        }
    }
    
}
