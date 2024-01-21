package lab4;

import java.awt.Color;
import java.awt.Graphics;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class bonus {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        PositionPanel panel = new PositionPanel();
        frame.setContentPane(panel);
        frame.setTitle("Moving Ball");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}

class PositionPanel extends JPanel implements Runnable {
    int x, deltaX;
    int y, deltaY;

    public PositionPanel() {
        setBackground(Color.CYAN);
        new Thread(this).start();
        x = 100;
        deltaX = 20;
        y = 100;
        deltaY = 20;
    }

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.setColor(Color.RED);
        g.fillOval(x, y, 20, 20);
    }

    @Override
    public void run() {
        while (true) {
            try {
                repaint();
                Thread.sleep(100);
                updatePos();
            } catch (InterruptedException ex) {
                Logger.getLogger(PositionPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
    private void updatePos() {
        y += deltaY;
        if (y > getHeight() || y < 0) {
            deltaY = -deltaY;
        }
        x += deltaX;
        if (x > getWidth() || x < 0) {
            deltaX = -deltaX;
        }
    }
}
