package programacionestructurada.tp4;

import java.util.Scanner;

public class NumMayorPrimo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[10];

        for (int i = 0; i < num.length; i++) {
            System.out.print("Ingrese el número en la posición [" + i + "]: ");
            num[i] = sc.nextInt();
        }

        int mayorPrimo = -1;
        int posicionMayorPrimo = -1;
        for (int i = 0; i < num.length; i++) {
            if (esPrimo(num[i]) && num[i] > mayorPrimo) {
                mayorPrimo = num[i];
                posicionMayorPrimo = i;
            }
        }

        if (mayorPrimo != -1) {
            System.out.println("El mayor número primo es: " + mayorPrimo + ", se encuentra en la posición [" + posicionMayorPrimo + "]");
        } else {
            System.out.println("No hay ningún número primo en el arreglo.");
        }
    }

    public static boolean esPrimo(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
