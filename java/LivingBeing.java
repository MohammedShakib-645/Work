/*abstract public class living extends matter{
    public living(){
        System.out.println("living is created....");
        
    }
}*/
public abstract class LivingBeing extends matter{
    
    private final boolean isCellular;

    public LivingBeing(double mass, double volume){
        super(mass, volume);
        this.isCellular=true;

    }
    public void showLiving(){
        System.out.println("Is cellular: " + isCellular);
    }
}