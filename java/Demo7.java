/*public class Demo7{
    public static void main(String args[]){
        int values[]={1,2,3,4,5,6,7,8,9,10};
        System.out.println("from the begining...");
        for(int i=0; i<values.length; i++){
            System.out.println(values[i]);
        }
        System.out.println("from the end...");
    }
}*/
/*public class Demo7{
    public static void main(String args[]){
        int marks[][]={
            {90,87,92,87,80},
            {80,70,60,50,40}
        };
        for(int i=0; i<marks.length; i++){
            for(int j=0; j<marks[i].length; j++){
                System.out.print(marks[i][j]+" ");
            }
            System.out.println();
        }
    }
}*/

/*public class Dem{
    public static void main(String args[]){
        boolean values[]=new boolean[10];

        for(int i=0; i<values.length; i++){
            System.out.println(values[i]);

        }
    }
}
public class Dem{
    public static void main(String args[]){
        char values[]=new char[10];

        for(int i=0; i<values.length; i++){
            System.out.println(values[i]);

        }
    }
}
*/
/*public class Demo7{
    public static void main(String args[]){
        int values[][]=new int[3][4];
        for(int i=0; i<values.length; i++){
            for(int j=0; j<values[i].length; j++){
                System.out.print(values[i][j]+" ");
            }
            System.out.println();
        }
    }
}*/
/*public class Demo7{
    public static void main(String args[]){
        int values[][]=new int[3][];
        values[0]=new int[4];
        values[1]=new int[3];
        values[2]=new int[2];
        for(int i=0; i<values.length; i++){
            for(int j=0; j<values[i].length; j++){
                System.out.print(values[i][j]+" ");
            }
            System.out.println();
        }
    }
}*/
/*public class Demo7{
    public static void main(String args[]){
        String name1="SoC";
        String name2=new String("SoC");

        System.out.println("name1   "+name1.hashCode());
        System.out.println("name2   "+name2.hashCode());

        System.out.println((name1).equals(name2));
        System.out.println((name1==name2));
            }
        }*/
//using Strings in java check an email is valid or not which take input from user.
import java.util.Scanner;
public class Demo7{
    public static void main(String args[]){
        Scanner
        String email="user@example.com";
        String pattern="^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$";
        System.out.println("Email is valid: " + email.matches(pattern));
    }
}
