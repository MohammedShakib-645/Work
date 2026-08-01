public class StringDemo {
    public static void main(String[] args) {
        // StringBuffer message = new StringBuffer( "hello !!!!");
        // System.out.println(message);
        // message.append( " Mohammed shakib");
        // System.out.println(message);
        // System.out.println(greeting);

        StringBuffer message = new StringBuffer("Hello !!!!");
        System.out.println("outcome of using stringBuffer");
        StringBuffer greeting = message.append("shakib");
        System.out.println(message.hashCode());
        System.out.println(greeting.hashCode());

        System.out.println("Outcome of using string objects....");
        String message1 = "hello !!!!";
        String greeting1 = message1.concat("shakib");
        System.out.println(message1.hashCode());
        System.out.println(greeting1.hashCode());

    }
}
