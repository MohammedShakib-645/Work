/*public class Sdemo{
    public static void main(String[] args) {
        male m= new male();
    }
}*/
public class Sdemo{
    public static void main(String[] args) {
        male m = new male(55, 0.05, "ABCD","DCBA", true);
        m.showMatter();
        m.showLiving();
        m.showMale();
        m.beard();
    }
}