import java.util.*;
public class LDemo{
    public static void main(String args[]) {
        Set<String> names =new HashSet<String>();
        long startTime=System.currentTimeMillis();
        for(int count=0;count<100000;count++){
            names.add("Name"+count);
        }
        long endTime=System.out.


        names.add("Zubair");
        names.add("Srinivas");
        names.add("Ram mohan");
        names.add("Praveen");
        names.add("Bala chary");
        names.add("Srinivas");
        
        Set<String>sortedNames=new TreeSet<String>(names);
        Iterator<String>iterator=sortedNames.iterator();
        String name;
        while (iterator.hasNext()) {
            name=iterator.next();
            name=name.toUpperCase();
            System.out.println(name);
        }
        //System.out.println(SortedNames);
        //System.out.println(names);
    }
}
