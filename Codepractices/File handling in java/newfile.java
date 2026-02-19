import java.io.File;
import java.io.IOException;
public class newfile {
    public static void main(String args[]){
        try{
            File obj= new File("MyFile2.txt");
            if(obj.createNewFile()){
                System.out.println("File is created:"+obj.getName());
            }
            else{
                System.out.println("File exists");
            }
        }
        catch(IOException e){
            System.out.println(e);
            e.printStackTrace();
        }
    }
    
}
