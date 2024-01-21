package lab5;

import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class exercise2 extends JFrame {

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        MyNewPanel panel = new MyNewPanel();
        frame.setContentPane(panel);
        frame.setTitle("Move Text");
        frame.setSize(500, 500);
        frame.setVisible(true);
    }

    public static class MyNewPanel extends JPanel {
        private String text = "Hello World";
        private int x = 100, y = 100;
        private int step = 20;

        public MyNewPanel() {
            this.setBackground(Color.CYAN);
            this.setFocusable(true);
            this.addKeyListener(new KeyListener() {
                @Override
                public void keyTyped(KeyEvent e) {
                }

                @Override
                public void keyPressed(KeyEvent e) {
                    moveString(e.getKeyCode());
                }

                @Override
                public void keyReleased(KeyEvent e) {
                }
            });
        }

        private void moveString(int keyCode) {
            int maxX = getWidth();
            int maxY = getHeight();

            switch (keyCode) {
                case KeyEvent.VK_RIGHT:
                    if (x + step > maxX) x = step;
                    else x += step;
                    break;
                case KeyEvent.VK_LEFT:
                    if (x - step < 0) x = step;
                    else x -= step;
                    break;
                case KeyEvent.VK_UP:
                    if (y - step < 0) y = step;
                    else y -= step;
                    break;
                case KeyEvent.VK_DOWN:
                    if (y + step > maxY)  y = step;
                    else y += step;
                    break;
            }
            repaint();
        }
        @Override
        public void paint(Graphics g) {
            super.paint(g);
            g.drawString(text, x, y);
        }
    }
}
