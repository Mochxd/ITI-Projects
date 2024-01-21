import java.util.Scanner;
public class exercise_3 {
    public static void main(String[] args) {
        // Get the number of star rows from the user
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter The number of Rows: ");
        int n = scanner.nextInt();
        star(n);
        star2(n);
        scanner.close();
    }
    static void star(int n) {
        int space = 2 * n - 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < space; j++) {
                System.out.print(" ");
            }
// decreasing space because when it at the beginning of next next line with a back space to ignore the shaping of (L pyramid)
            space = space - 1;  
            for (int j = 0; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
 // Another solution
   static void star2(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                System.out.print(" ");
            }
            for (int k = 0; k <= i; k++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }    
}
