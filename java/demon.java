/**
 * the class is defind to alloe the instantiation exactly once  *singleton design pattern
 */

public class demon {

    //static variable totrack the instance of this classs.
    private static singleton s=null;

    //to restrict object creation directly
    private singleton(){

    }

    //static method to restrict the object creation exactly to one instanve
    public static singleton createsingleton(){
        if(s==null){
            s=new singleton();
        }
        return s;
    }
    
}
