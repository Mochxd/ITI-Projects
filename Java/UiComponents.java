import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import static javax.swing.JOptionPane.INFORMATION_MESSAGE;

public class UiComponents {
    public static void main(String[] args) {
        new Ui().setVisible(true);
    }

    public static class Ui extends JFrame implements ActionListener {
        private JTextField userName;

        public Ui() {
            super("Happy Birthday");
            setLayout(new FlowLayout());
            userName = new JTextField(15);
            add(userName);

            JButton btn = new JButton("Click me"); // Set the text for the button
            btn.addActionListener(this);
            add(btn);

            setSize(300, 300);
            setLocation(500, 200);
            setDefaultCloseOperation(EXIT_ON_CLOSE);
        }

        @Override
        public void actionPerformed(ActionEvent e) {
            String getName = userName.getText();
            String msg = "Happy Birthday to our Team leader and the best ever " + getName + " :D";
            JOptionPane.showMessageDialog(
                    JOptionPane.getRootFrame(),
                    msg,
                    "Happy Birthday",
                    JOptionPane.INFORMATION_MESSAGE
            );
        }

    }
}
