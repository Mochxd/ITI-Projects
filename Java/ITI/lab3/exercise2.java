package lab3;

import javax.swing.JFrame; // static
import javax.swing.JPanel;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;

public class exercise2{
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        LampPanel panel = new LampPanel();
        frame.setContentPane(panel);
        frame.setTitle("Lamp Drawing");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }
}

class LampPanel extends JPanel {

    @Override
    public void paintComponent(Graphics g) {
        // the base of the lamp (rectangle)
        g.drawRect(80, 250, 125, 15);
        // the lines for base
        g.drawLine(110, 250, 125, 200);
        g.drawLine(170, 250, 155, 200);
        // arcs
        g.drawArc(85, 170, 117, 30, 180, 165);
        // lines connecting the lamp shade arcs
        g.drawLine(85, 187, 100, 89);
        g.drawLine(200, 190, 180, 89);
        // outline for the ovals
        g.drawOval(130, 110, 20, 50);
        g.drawOval(100, 120, 15, 30);
        g.drawOval(170, 120, 15, 30);
        g.drawOval(100, 80, 80, 20);
        // Set color to green
        g.setColor(Color.GREEN);
        // fill oval for the lamp shade
        g.fillOval(100, 80, 80, 20);
        // fill ovals at the center
        g.fillOval(130, 110, 20, 50);
        g.fillOval(100, 120, 15, 30);
        g.fillOval(170, 120, 15, 30);
    }
}
