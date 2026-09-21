abstract class Employee{

   abstract  double calculateMonthlySalary();

    abstract void getEmployeeDetails();
}
class FullTimeEmployee extends Employee{

    double salary=10000;

    double benefits=1000;

    double calculateMonthlySalary(){
        return salary+benefits;
    }
    public void getEmployeeDetails(){

        System.out.println("Full time EMployee");

        System.out.println("salary="+calculateMonthlySalary());
    }
}

class partTimeEmployee extends Employee{

    double rate=5000;

    double hours=100;

    double calculateMonthlySalary(){

        return rate*hours;
    }
    public void getEmployeeDetails(){

        System.out.println("part time EMployee");

        System.out.println("salary="+calculateMonthlySalary());
    }
}
class commissionEmployee extends Employee{

    double salary=30000;

    double sales=70000;
    
    double  calculateMonthlySalary(){

        return salary+(sales*10/100);
    }

    public void getEmployeeDetails(){

        System.out.println("commission Employee");

        System.out.println("salary="+calculateMonthlySalary());
    }


}
class payroll{
    public static void main(String args[]){

        Employee e1=new FullTimeEmployee();
        Employee e2=new partTimeEmployee();
        Employee e3=new commissionEmployee();

        Employee e[]={e1,e2,e3};

        for(int i=0; i<e.length; i++){
            e[i].getEmployeeDetails();
        }
    }
}