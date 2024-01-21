package Lab4;
import java.awt.*;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;

public class exercise1 {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        MyNewPanel panel = new MyNewPanel();
        frame.setContentPane(panel);
        frame.setTitle("Date");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}

class MyNewPanel extends JPanel implements Runnable {

    public MyNewPanel() {
        this.setBackground(Color.CYAN);
        Thread th = new Thread(this);
        th.start();
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.drawString(new Date().toString(), 150, 200);
    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(1000);
                this.repaint();
            } catch (InterruptedException ex) {
                Logger.getLogger(MyNewPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}