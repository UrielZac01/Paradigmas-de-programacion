import java.util.ArrayList;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> lista = new ArrayList<>();
        Random random = new Random();

        for (int i = 0; i < 5; i++) {
            int numeroAleatorio = random.nextInt(20) + 1; // Genera un numero aleatorio entre 1 y 20
            lista.add(numeroAleatorio);
        }

        System.out.println(lista);
        
        int suma = 0;
        for (int numero : lista) {
            suma += numero;
        }

        System.out.println("La suma de la lista es " + suma);
    }
}