public class clock{
    private int hours;
    private int minutes;
    private int seconds;

    public void setTime(int h,int m,int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
    public void showTime(){
        System.out.println(hours+"hh:"+minutes+"mm:"+seconds+"ss");
    }
    public boolean checkEmail (String email){
       return true;

    }
}
