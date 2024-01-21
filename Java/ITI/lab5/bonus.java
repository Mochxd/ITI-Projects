package lab5;

import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.ArrayList;
import java.util.List;

public class bonus extends JFrame {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        MyNewPanel panel = new MyNewPanel();
        frame.setContentPane(panel);
        frame.setTitle("Draw Lines");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }

    public static class MyNewPanel extends JPanel {
        private ArrayList<Line> lines = new ArrayList<>(); // arraylist to store unlimited lines
        private Point startPoint;
        private Point endPoint;

        public MyNewPanel() {
            this.setFocusable(true);
            this.setBackground(Color.CYAN);
            addMouseListener(new MouseAdapter() {
                @Override
                public void mousePressed(MouseEvent e) {
                    startPoint = e.getPoint();
                }

                @Override
                public void mouseReleased(MouseEvent e) {
                    endPoint = e.getPoint();
                    lines.add(new Line(startPoint, endPoint));
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
        public void paintComponent(Graphics g) {
            this.setBackground(Color.CYAN);
            super.paintComponent(g);

            for (Line line : lines) {
                g.drawLine(line.startPoint.x, line.startPoint.y, line.endPoint.x, line.endPoint.y);
            }
            if (startPoint != null && endPoint != null) {
                g.drawLine(startPoint.x, startPoint.y, endPoint.x, endPoint.y);
            }
        }
    }
    public static class Line {
        private Point startPoint;
        private Point endPoint;

        public Line(Point startPoint, Point endPoint) {
            this.startPoint = startPoint;
            this.endPoint = endPoint;
        }
    }
}