package company;


public class students {
    public static int counter=0;
    public String name;
    public int id;
    public int grade;
    public String address;
    public void SetName(String name){
        this.name = name;
    }
    // Constructor to send all parameters
    public students(String name, int grade, String address, int id) {
        this.name = name;
        this.grade = grade;
        this.address = address;
        this.id = id;
        counter ++;

    }
    // Default for class Students
    public students() {
        counter ++;
    }
    public static void print_count(){
        System.out.println(counter);
    }

    public static  void modify(students s){
        s.name = "Ahmed";
        s.id = 2;
        s.address = "Cairo";
        s.grade = 75;

    }
    public static  void modify2(String name){
        name = "Ahmed";

    }

    public void register(){
        System.out.println("Register for course is done Successfully");
    }
    public void take_exam(){
        System.out.println("Taking Exam");
    }
    public void printInfo(){
        System.out.println(name + " " + grade + " " + id + " " + address);
    }
}
