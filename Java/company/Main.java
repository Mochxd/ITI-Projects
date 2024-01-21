package company;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        // student 1
        students student1 = new students("Mohamed", 185, "fayoum", 1);
        student1.printInfo();
        students student2 = new students();
        students.modify(student2);
        student2.printInfo();
        students.print_count();
    }
}