public class Edemo {
	public static void main(String[] args) {
		validator validator = new validator();

		try {
			validator.checkUserName("john_doe");
			System.out.println("Username is valid");
		} catch (invalidUserNameException exception) {
			System.out.println("Username error: " + exception.getMessage());
		}

		try {
			validator.checkPassword("password123");
			System.out.println("Password is valid");
		} catch (invalidPasswordException exception) {
			System.out.println("Password error: " + exception.getMessage());
		}
	}
}