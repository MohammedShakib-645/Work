public class validator {
    public static void checkUserName(String name)  throws invalidUserNameException {

        if (name.contains("@")) {
            throw new invalidUserNameException("Name should not have @ or /");
        }
    }

    public static void checkPassword(String password) throws invalidPasswordException {

        if (password.length() < 8) {
            throw new invalidPasswordException("Password must be at least 8 characters");
        }
    }

}