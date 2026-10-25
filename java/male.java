/*public class male extends HumanBeing{
    public male(){
        System.out.println("A perfect male is created....");
    }
}*/
public class male extends HumanBeing{

    private final String chromosomes="XY";
    private final boolean hasBeard;
    public male(double mass, double volume, String name, String language, boolean hasBeard){
        super(mass, volume, name, language);
        this.hasBeard=hasBeard;
    }
    public void beard(){
        if(hasBeard){
            System.out.println("Yes having Beard");
        }
        else{
            System.out.println("No beard");
        }
    }

    public void showMale(){
        showHumanBeing();
        System.out.println("Chromosomes: " + chromosomes);
        System.out.println("Has beard: " + hasBeard);
    }
}