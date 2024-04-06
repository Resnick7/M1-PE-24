package programacionestructurada.tp4;

import java.util.ArrayList;
import java.util.Scanner;

public class NumMayorAL {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();

        for (int i = 0; i < 10; i++) {
            System.out.print("Ingrese el número en la posición [" + i + "]: ");
            int num = sc.nextInt();
            numeros.add(num);
        }

        int mayor = numeros.get(0);
        int posicionMayor = 0;
        for (int i = 1; i < 10; i++) {
            if (numeros.get(i) > mayor) {
                mayor = numeros.get(i);
                posicionMayor = i;
            }
        }

        System.out.println("El mayor número leído es: " + mayor + ", se encuentra en la posición [" + posicionMayor + "]");
    }
}
