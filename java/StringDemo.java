public class StringDemo{
    public static void main (String arg[]){
    //StringBuffer message=new StringBuffer("hello!!");
    //System.out.println("outcomes of using stringBuffer");
    //StringBuffer greeting=message.append("shakib");
    //System.out.println(message.hashCode());
    //System.out.println(greeting.hashCode());

        System.out.println("outcomes of using string Objects");
        String message1="Hello !!!";
        String greeting1= message1.concat("Shakib");
        System.out.println(message1.hashCode());
        System.out.println(greeting1.hashCode());  

        StringBuilder message2=new StringBuilder("hello!!");
        System.out.println("outcomes of using stringBuilder");
        StringBuilder greeting2=message2.append("shakib");
        System.out.println(message2.hashCode());
        System.out.println(greeting2.hashCode());
    }
}

*//
*\\DeadLockDemo
