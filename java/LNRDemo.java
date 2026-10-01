import java.io.*;

public class LNRDemo {
    public static void main(String args[]) throws Exception {
        LineNumberReader reader = new LineNumberReader(new FileReader("smarAtm.java"));
        String line = null;
        while ((line = reader.readLine()) != null) {
            System.out.println(reader.getLineNumber() + "i" + line);
        }
        reader.close();
    }
}
