public class E2demo {
    public static void main(String[] args)
            throws invalidUserNameException, invalidPasswordException {
        System.out.println("from begin of the main.....");
        String userName = args[0];
        String password = args[1];

        validator.checkUserName(userName);
        validator.checkPassword(password);
        System.out.println("valid userName/ password");

        System.out.println("from end of the main.....");

    }
}