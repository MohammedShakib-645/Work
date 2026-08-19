public class ex {
    public static void main(String[] args) {
        System.out.println("This is the beginning of the clock");

        clock c1 = new clock(1,2, 3);
        clock c2 = new clock(7, 53, 6);
        clock c3 = new clock(22, 40, 59);
        c1.showTime();
        c2.showTime();
        c3.showTime();
        c3.setTime(99, 999, 9999);
        System.out.println("This is the end of the clock");
    }
}
