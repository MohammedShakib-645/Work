import java.util.*;

public class MapDemo {
    public static void main(String args[]){
        Map<String,Person> sdata=new HashMap<String,Person>();
        sdata.put("25N81A6601",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));
        sdata.put("25N81A6601",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));
        sdata.put("25N81A9601",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));
        sdata.put("25N81A6601",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));
        sdata.put("25N81A6602",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));
        sdata.put("25N81A6601",new Person("Srinivas","CSEAIML","srinivas@gmail.com","1234567890"));

        sdata.put(null,null);
        sdata.put(null,null);
        Set<String>rollNos = sdata.keySet();
        Iterator<String>iterator=rollNos.iterator();
        String rollNo;
        Person studentDetails;
        while(iterator.hasNext()){
            rollNo=iterator.next();
            studentDetails=sdata.get(rollNo);
            System.out.println(rollNo+"\t:\t"+studentDetails);
        }
    }
}


