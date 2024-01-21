package OOP;

import javax.swing.*;

public class Menu extends JFrame {
    private JMenuBar menuBar;
    private JMenuItem fileMenu;
    private JMenu editMenu; // Change to JMenu
    private JMenuItem openMenuItem;
    private JMenuItem saveMenuItem;
    private JMenuItem exitMenuItem;
    private JRadioButtonMenuItem radioMenuItem1;
    private JRadioButtonMenuItem radioMenuItem2;
    private JCheckBoxMenuItem checkMenuItem1;
    private JCheckBoxMenuItem checkMenuItem2;

    public Menu() {
        setTitle("Menu Demo");

        menuBar = new JMenuBar();
        openMenuItem = new JMenuItem("Open");
        saveMenuItem = new JMenuItem("Save");
        exitMenuItem = new JMenuItem("Exit");

        radioMenuItem1 = new JRadioButtonMenuItem("Radio Item1");
        radioMenuItem2 = new JRadioButtonMenuItem("Radio Item2");

        checkMenuItem1 = new JCheckBoxMenuItem("Check item1");
        checkMenuItem2 = new JCheckBoxMenuItem("Check item2");

        fileMenu = new JMenu("File");

        fileMenu.add(openMenuItem);
        fileMenu.add(saveMenuItem);
        fileMenu.add(exitMenuItem);

        menuBar.add(fileMenu);

        editMenu = new JMenu("Edit");
        editMenu.add(radioMenuItem1);
        editMenu.add(radioMenuItem2);
        editMenu.add(checkMenuItem1);
        editMenu.add(checkMenuItem2);

        menuBar.add(editMenu);
        setJMenuBar(menuBar); // Change to setJMenuBar

        setSize(400, 500);
        setLocation(200, 200);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }

    public static void main(String[] args) {
        new Menu().setVisible(true);
    }
}
