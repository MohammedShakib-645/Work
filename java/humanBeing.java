public  abstract class humanBeing extends living{
    public humanBeing(float mass, float volume, float height, String gender, String name){
        super(mass, volume);
        System.out.println("Human being is living");
        System.out.println("Height: " + height + " Gender: " + gender + " Name: " + name);
    }
    
    
}
