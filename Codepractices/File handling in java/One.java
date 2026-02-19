import java.io.File;
import java.io.IOException;
public class One{
    public static void main(String args[]){
try{
    File obj=new File("MyFile.txt");
    if(obj.createNewFile()){
        System.out.println("File created:"+obj.getName());
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