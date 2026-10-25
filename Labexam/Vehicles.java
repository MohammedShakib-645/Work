public class Vehicles{
    protected String make;
    protected String model;
    protected double fuelEffiency;
    public Vehicles(String make, String model, double fuelEffiency){
        this.make=make;
        this.model=model;
        this.fuelEffiency=fuelEffiency;
    }
    public double CalculateRange(double fuelCapacity){
        return fuelCapacity * fuelEffiency;
    }
}