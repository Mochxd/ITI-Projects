package lab3;

import java.awt.*;
import javax.swing.*;

public class exercise1 {
    public static void main(String[] args) {
        JFrame fram = new JFrame();
        fonts panel = new fonts();
        fram.setContentPane(panel);
        fram.setTitle("Font List Old");
        fram.setSize(1000,1000);
        fram.setVisible(true);          
    }
}
class fonts extends JPanel{
    @Override
       public void paint(Graphics g){
        //String [] fonts = Toolkit.getDefaultToolkit().getFontList();
       String [] fonts = GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames();
       for (int i=0;i < fonts.length ;i++){
           Font font = new Font(fonts[i], Font.BOLD,18);
           g.setFont(font);
           String name = fonts [i];
           g.drawString(name, 10, (i*50)+100);
       }    
    }
}