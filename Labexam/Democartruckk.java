public class Democartruckk{
    public static void main(String[] args) {
        Carr car=new Carr("Toyato", "k12", 15, 5);
        Truckk truck= new Truckk("volvo", "3GT", 9, 3000, true);
        car.display();
        System.out.println();
        truck.display();
    }
}