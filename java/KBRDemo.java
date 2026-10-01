import java.io.*;
public class KBRDemo {
    public static void main(String[] args) throws Exception { 
        BufferedReader reader=new BufferedReader(new InputStreamReader(System.in));
        int result=Integer.parseInt(reader.readLine())+Integer.parseInt(reader.readLine());
        // String input= reader.readLine();
        // System.out.println("hello world!....");
        System.out.println("the sum of two inputs = " +result);
        
        
    }
}
