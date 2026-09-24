import java.io.*;
public class DISDemo{
    public static void main (String args[]){
        DataInputStream dis=null;
        int englishMarks;
        int mathMarks;
        int scienceMarks;
        double percentage;
        try{
            dis=new DataInputStream(new FileInputStream("primdata.dat"));
            englishMarks=dis.readInt();
            mathMarks=dis.readInt();
            scienceMarks=dis.readInt();
            percentage=dis.readDouble();
            System.out.println("English marks:\t"+englishMarks);
            System.out.println("Maths marks:\t"+mathMarks);
            System.out.println("science marks:\t"+scienceMarks);
            System.out.println("Percentage:\t"+percentage);
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}