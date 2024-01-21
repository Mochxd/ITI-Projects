package lab5;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class exercise3 extends JFrame {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        MyNewPanel panel = new MyNewPanel();
        frame.setContentPane(panel);
        frame.setTitle("Draw Line");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }

    public static class MyNewPanel extends JPanel {
        private Point startPoint;
        private Point endPoint;

        public MyNewPanel() {
            this.setFocusable(true);

            addMouseListener(new MouseAdapter() {
                @Override
                public void mousePressed(MouseEvent e) {
                    startPoint = e.getPoint();
                }

                @Override
                public void mouseReleased(MouseEvent e) {
                    endPoint = e.getPoint();
                    repaint();
                }
            });

            addMouseMotionListener(new MouseAdapter() {
                @Override
                public void mouseDragged(MouseEvent e) {
                    endPoint = e.getPoint();
                    repaint();
                }
            });
        }

        @Override
        public void paint(Graphics g) {
            this.setBackground(Color.CYAN);
            super.paint(g);
            if (startPoint != null && endPoint != null) {
                g.drawLine(startPoint.x, startPoint.y, endPoint.x, endPoint.y);
            }
        }
    }
}
