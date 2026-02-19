import java.io.File;
import java.io.IOException;
public class mylife {
    public static void main(String args[]){
        try{
            File obj=new File("MyFile3.txt");
            if(obj.createNewFile()){
                System.out.println("File created:"+obj.getName());
            }
        }
        catch(IOException e){
            System.out.println("An error occured sorry!");
            e.printStackTrace();
            
        }
    }
  
}
