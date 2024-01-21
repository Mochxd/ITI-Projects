package OOP;

import javax.swing.*;

public class TableFrame extends JFrame {
    private JTable table;
    private String[] cols = {"ID", "Student", "Grade"};
    private String [][] data = {
        {"1", "Mohamed Mostafa", "A+"},
        {"2", "Ali Mohamed", "B+"},
        {"3", "Soha Mohamed", "B+"}
    };
    public TableFrame(){
        setTitle("Tables Demo");
        table = new JTable(data,cols);
        add(table);
        setSize(400,500);
        setLocation(200,200);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new TableFrame().setVisible(true);
    }
}
