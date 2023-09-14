import java.util.Scanner;

public class DivisionRestasSucesivas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingresa el dividendo: ");
        int dividendo = scanner.nextInt();

        System.out.print("Ingresa el divisor: ");
        int divisor = scanner.nextInt();

        int cociente = 0;
        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }

        System.out.println("Cociente: " + cociente);
        System.out.println("Residuo: " + dividendo);

        scanner.close();
    }
}
