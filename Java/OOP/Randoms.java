package OOP;

import java.util.Random;

public class Randoms {
    public static void main(String[] args) {
        for(int i=0; i<10; i++){
            System.out.println(Math.random());
        }

            Random r1= new Random();
            Random r2= new Random(5);
        for(int i=0; i<10; i++){
            System.out.println(r1.nextInt(999));
        }

    }
}
