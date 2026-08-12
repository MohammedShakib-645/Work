import java.util.Scanner;

public class smarAtm {
    public static void main(String args[]) {
        int fixedCode = 1111;
        int pin, attempts = 3;
        int balance = 5000;
        double depositAmount;
        double withdrawAmount;
        Scanner sc = new Scanner(System.in);
        while (attempts > 0) {
            System.out.println("Enter your pin:");
            pin = sc.nextInt();
            if (pin == fixedCode) {
                break;
            } else {
                attempts -= 1;
                System.out.println("Incorrect pin");
                System.out.println("Attempts left:" + attempts);
            }
        }
        if (attempts == 0) {
            System.out.println("Your card is blocked:");
            sc.close();
            return;
        }
        while (true) {
            System.out.println("Welcome to the atm:");
            System.out.println("1.check your balance:");
            System.out.println("2.deposit your money:");
            System.out.println("3.withdraw the amount:");
            System.out.println("4.Exit");
            System.out.println("Enter your choice:");
            int choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("check your balance:" + balance);
                    break;
                case 2:
                    System.out.println("deposit your money:");
                    depositAmount = sc.nextDouble();
                    balance += depositAmount;
                    break;
                case 3:
                    System.out.println("withdrawl your amount:");
                    withdrawAmount = sc.nextDouble();
                    if (withdrawAmount > balance) {
                        System.out.println("Insufficient balance:");
                    } else {
                        System.out.println("collect your money:");
                    }
                    break;
                case 4:
                    System.out.println("exit");
                    sc.close();
                    return;
                default:
                    System.out.println("incorrect pin");

            }
        }

    }
}