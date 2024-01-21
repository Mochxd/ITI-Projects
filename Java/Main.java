import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String name = getName();
        int age = getAge();
        String email = getEmail();
        String faculty = getFaculty();

        printName(name);
        printAge(age);
        printEmail(email);
        printFaculty(faculty);
    }
    private static String getName(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your Name: ");
        return input.next();
    }
    private static int getAge(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your Age: ");
        return input.nextInt();
    }
    private static String getEmail(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your Email: ");
        return input.next();
    }
    private static String getFaculty(){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Your Faculty: ");
        return input.next();
    }
    private static void printName(String name){
        System.out.println("Your name is " + name);
    }
    private static void printAge(int age){
        System.out.println("Your age is " + age);
    }
    private static void printEmail(String email){
        System.out.println("Your email is " + email);
    }
    private static void printFaculty(String faculty){
        System.out.println("Your faculty is " + faculty);
    }
}