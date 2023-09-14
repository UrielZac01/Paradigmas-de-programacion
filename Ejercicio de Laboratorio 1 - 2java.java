import java.util.Scanner;

public class MultiplicacionSumasSucesivas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingresa el primer numero: ");
        int num1 = scanner.nextInt();

        System.out.print("Ingresa el segundo numero: ");
        int num2 = scanner.nextInt();

        int resultado = 0;
        for (int i = 0; i < num2; i++) {
            resultado += num1;
        }

        System.out.println("Resultado de la multiplicacion: " + resultado);

        scanner.close();
    }
}
