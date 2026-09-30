import java.io.*;

public class FRWDemo {
    
    public static void main(String args[]){
        int data;
        try(FileReader reader=new FileReader("hello.java");
               FileWriter writer=new FileWriter("hello_copy_java");){
            while((data=reader.read())!=-1){
                writer.write(data);
            }
        }catch(IOException ie){
           ie.printStackTrace();
        }
    }
}