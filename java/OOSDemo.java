import java.io.*;
public class OOSDemo{
    public static void main (String args[]){
        ObjectOutputStream os=null;
        int data;
        try{
            clock c=new clock();
            c.setTime(14,53,55);
            os=new ObjectOutputStream(new FileOutputStream("javadata.dat"));
            os.writeObject(c);

        }catch(FileNotFoundException fe){
            fe.printStackTrace();

        }catch(IOException ie){
            ie.printStackTrace();

        }finally{
            if(os !=null){

                try{
                    os.close();

                }catch(IOException ie){
                    ie.printStackTrace();
                }
            }
        }
    }
}