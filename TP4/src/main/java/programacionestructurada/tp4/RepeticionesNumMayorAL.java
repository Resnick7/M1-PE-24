package programacionestructurada.tp4;

import java.util.ArrayList;
import java.util.Scanner;

public class RepeticionesNumMayorAL {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();

        for (int i = 0; i < 10; i++) {
            System.out.print("Ingrese el número en la posición [" + (i + 1) + "]: ");
            int num = sc.nextInt();
            numeros.add(num);
        }

        int mayor = numeros.get(0);
        for (int i = 1; i < numeros.size(); i++) {
            if (numeros.get(i) > mayor) {
                mayor = numeros.get(i);
            }
        }

        int repeticiones = 0;
        for (int num : numeros) {
            if (num == mayor) {
                repeticiones++;
            }
        }

        System.out.println("El mayor número ingresado es: " + mayor);
        System.out.println("El mayor número se repite " + repeticiones + " veces");
    }
}
