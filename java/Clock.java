public class Clock implements java.io.Serializable{
    private int hours;
    private int minutes;//constructor , parameter
    private int seconds;//javap java.lang.string
    
    public Clock(){
        this(10 , 10, 35);
    }
    public Clock(int value){
        this(value,value,value);
    }

    public Clock(int hours,int minutes,int seconds){
        this.setTime(hours,minutes,seconds);
    }

    public void setTime(int hours,int minutes,int seconds){
        if(hours>=0&&hours<=23&&minutes>=0&&minutes<=59&&seconds>=0&&seconds<=59){
            throw new IllegalArgumentException("invalid values to time......");
        }
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    public void showTime(){
        System.out.println(hours+"hh:"+minutes+"mm:"+seconds+"ss:");
    }
}