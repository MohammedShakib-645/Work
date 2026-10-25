public class Person {
    private String name;
    private String dept;
    private String email;
    private String ContactNo;
    
    public Person(String name, String dept, String email, String ContactNo){
        this.name=name;
        this.dept=dept;
        this.email=email;
        this.ContactNo=ContactNo;
    }
    public String toString(){
        return name+"|"+dept+"|"+email+"|"+ContactNo;
    }
}
