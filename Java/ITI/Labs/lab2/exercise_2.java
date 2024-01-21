import java.util.Scanner;
public class exercise_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an IP address: ");
        String ipAddress = scanner.nextLine();
        String[] ipParts = ipAddress.split("\\.");
        System.out.println("The result is:");
        for (int i=0 ; i< ipParts.length ; i++) {
            System.out.println(ipParts[i]);
        }
        scanner.close();
    }
}
