/*abstract public class HumanBeing extends living{
    public HumanBeing(){
        System.out.println("Rational thinking added.....");
        
    }
}*/
public abstract class HumanBeing extends LivingBeing{

    private final String name;
    private final String language;

    public HumanBeing(double mass, double volume, String name, String language){
        super(mass, volume);
        this.name=name;
        this.language=language;
    }

    public void showHumanBeing(){
        System.out.println("Name: " + name);
        System.out.println("Language: " + language);
    }
}