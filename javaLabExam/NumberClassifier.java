import java.util.Scanner;
class NumberClassifier{
    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a positive integer");
        int n=sc.nextInt();

        int sum=0;
        int even=0;
        int odd=0;
        int rem=0;
        int num=n;

        while(num>0){
            rem=num%10;
            sum=sum+rem;
            if(rem%2==0){
                even++;
            }
            else{
                odd++;
            }
            num=num/10;
        }
        System.out.println("Sum ="+sum);
        System.out.println("Even ="+even);
        System.out.println("odd ="+odd);

        int flag=0;

        for(int i=2; i<sum; i++){
            if(sum%i==0){
                flag=1;

                break;
            }
        }
        if(flag==0 && sum>1){
            System.out.println("Sum is prime");
        }
        else{
            System.out.println("Sum is not prime");
        }
    }
}