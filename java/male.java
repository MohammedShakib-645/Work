public class male extends humanBeing {
    public male(float mass, float volume, float height, String gender, String name) {
        super(mass, volume, height, gender, name);
        System.out.println("Male is created....");
    }

    public static void main(String[] args) {
        new male(70.0f, 0.07f, 1.75f, "Male", "John");
    }
}
