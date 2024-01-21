package lab3;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Color;
import java.awt.Graphics;
import java.util.logging.Level;
import java.util.logging.Logger;

public class exercise3 {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        Lamp panel = new Lamp();
        frame.setContentPane(panel);
        frame.setTitle("Lamp Drawing");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}

class Lamp extends JPanel implements Runnable {
    private boolean greenFill = false;

    public Lamp() {
        Thread th = new Thread(this);
        th.start();
    }

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);

        g.drawRect(80, 250, 125, 15);
        g.drawLine(110, 250, 125, 200);
        g.drawLine(170, 250, 155, 200);
        g.drawArc(85, 170, 117, 30, 180, 165);
        g.drawLine(85, 187, 100, 89);
        g.drawLine(200, 190, 180, 89);
        g.drawOval(130, 110, 20, 50);
        g.drawOval(100, 120, 15, 30);
        g.drawOval(170, 120, 15, 30);
        g.drawOval(100, 80, 80, 20);

        if (greenFill) {
            g.setColor(Color.GREEN);
            g.fillOval(100, 80, 80, 20);
            g.fillOval(130, 110, 20, 50);
            g.fillOval(100, 120, 15, 30);
            g.fillOval(170, 120, 15, 30);
        }
    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(1000);
                greenFill = !greenFill;
                repaint(); 
            } catch (InterruptedException ex) {
                Logger.getLogger(Lamp.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}



