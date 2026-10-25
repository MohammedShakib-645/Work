public class MTThread extends Thread {
    private int table;
    public MTThread(String name,int table){
        super(name);
        this.table=table;
    }
}
@Override
public void run(){
    for (int i=1;i<=10;i++){
        System.out.println(table+"*"+i+"="+(table*i));
    }
}
