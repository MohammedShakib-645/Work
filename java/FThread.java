import java.util.Random;
public class FThread {
    private int input;
    public FThread(String name,int input) {
        super(name);
        this.input=input;
    }

    private int findFactorial(int i){
        if( i==0|| i==1){
            return 1;
        }
        return i*findFactorial(i-1);
    }

    public void run(){
        Random random=new Random();
        for(int i=1;i<=input;i++){
            System.out.println("Factorial of "+i+"is"+findFactorial(i));
        }
    }
}
