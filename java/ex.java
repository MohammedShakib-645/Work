public class ex {
    public static void main(String[] args) {
        System.out.println("This is the beginning of the clock");

        Clock c1 = new Clock(1, 2, 3);
        Clock c2 = new Clock(7, 53, 6);
        Clock c3 = new Clock(22, 40, 59);
        c1.showTime();
        c2.showTime();
        c3.showTime();
        System.out.println("This is the end of the clock");
    }
}
