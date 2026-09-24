import java.io.*;
public class DOSDemo{
    public static void main (String args[]){
        DataOutputStream dos=null;
        int englishMarks=78;
        int mathMarks=98;
        int scienceMarks=89;
        double percentage=(englishMarks+mathMarks+scienceMarks)/3;
        try{
            dos=new DataOutputStream(new FileOutputStream("primdata.dat"));
            dos.writeInt(englishMarks);
            dos.writeInt(mathMarks);
            dos.writeInt(scienceMarks);
            dos.writeDouble(percentage);
            dos.close();
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}