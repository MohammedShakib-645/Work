public class clockdemo{
    public static void main(String[] args){
        System.out.println("This is the beginning of the clock");
        //Clock c1,c2,c3=null;
        try{
        Clock c1 =new Clock( 1,2,3);
        c1.showTime();
        Clock c2 =new Clock( 7,53,6);
        c2.showTime();
        Clock c3 =new Clock( 22,40,59);
        c3.showTime();
        }catch (Exception e){
            System.out.println("Exception occured ");
        }
        System.out.println("This is the end of the clock");
    }
}