import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingresa un numero entero no negativo: ");
        int n = scanner.nextInt();

        if (n < 0) {
            System.out.println("El numero debe ser no negativo.");
        } else {
            long factorial = 1;
            for (int i = 1; i <= n; i++) {
                factorial *= i;
            }
            System.out.println("Factorial de " + n + " es " + factorial);
        }

        scanner.close();
    }
}
