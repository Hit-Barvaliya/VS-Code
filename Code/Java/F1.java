
import java.nio.file.*;
import java.nio.*;

public class F1 {
    public static void main (String string[]){

        try{
            Path p = Paths.get("Detaset");

            if(Files.exists(p)){
                System.out.println("Folder is all ready created");
            }
            else 
            {
                Path donePath = Files.createDirectories(p);
                System.out.println("Directry is created at :- "+donePath.toString());
            }

        } catch (Exception e){
            e.printStackTrace();
        }

    }
}
