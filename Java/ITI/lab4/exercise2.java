package Lab4;

import java.awt.*;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.*;

public class exercise2 {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        TextPanel panel = new TextPanel();
        frame.setContentPane(panel);
        frame.setTitle("Date");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}

class TextPanel extends JPanel implements Runnable {
    private int x;
    public TextPanel() {
        this.setBackground(Color.CYAN);
        Thread th = new Thread(this);
        th.start();
        x = 100;
    }
    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.drawString("Hello we are QA..we heat developers!", x, 100);
    }
    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(1000);
                this.repaint();
                x += 10;
            } catch (InterruptedException ex) {
                Logger.getLogger(TextPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
