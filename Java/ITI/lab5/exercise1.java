package lab5;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

class exercise1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        MyNewPanel IncDec = new MyNewPanel();
        frame.setContentPane(IncDec);
        frame.setTitle("Increment and Decrement Numbers");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}
class MyNewPanel extends JPanel {

    public void paint(Graphics g) {
        super.paint(g);
        this.setBackground(Color.CYAN);
        g.drawString("Counter is: " + counter, 200, 200);
    }
    JButton incButton;
    JButton decButton;
    int counter=0;
    public MyNewPanel() {
        //this.setBackground(Color.CYAN);
        incButton = new JButton("++");
        decButton = new JButton("--"); 
        add(incButton);
        add(decButton);
        incButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                counter++;
                repaint();
            }
        });
        decButton.addActionListener(new ActionListener() { 
            @Override
            public void actionPerformed(ActionEvent e) {
                counter--;
                if(counter < 0) counter = 0;
                repaint();
            }
        });
    }
}