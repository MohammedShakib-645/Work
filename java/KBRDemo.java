// import java.io.*;
// public class KBRDemo {
//     public static void main(String args[]) throws Exception {
//         BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
//         int result=Integer.parseInt(reader.readLine()) + Integer.parseInt(reader.readLine());
//         System.out.println("The sum of two inputs is: " + result); 
//     }
// }

import java.io.*;
public class KBRDemo {
    public static void main(String args[]) throws Exception {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        String result = String.valueOf(reader.readLine());
        System.out.println( result); 
    }
}
