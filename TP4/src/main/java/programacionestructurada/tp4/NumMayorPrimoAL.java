
import java.util.ArrayList;
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author WIN10
 */
public class NumMayorPrimoAL {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();

        System.out.println("Introduce 10 numeros enteros:");
        for (int i = 0; i < 10; i++) {
            System.out.print("Entero #" + (i + 1) + ": ");
            int num = scanner.nextInt();
            numeros.add(num);
        }

        int posicionMayorPrimo = encontrarPosicionMayorPrimo(numeros);
        
        if (posicionMayorPrimo != -1) {
            System.out.println("El mayor número primo está en la posición " + posicionMayorPrimo + ".");
        } else {
            System.out.println("No se encontró ningún número primo en la lista.");
        }
    }

    public static int encontrarPosicionMayorPrimo(ArrayList<Integer> numeros) {
        int mayorPrimo = Integer.MIN_VALUE;
        int posicion = -1;

        for (int i = 0; i < numeros.size(); i++) {
            int num = numeros.get(i);
            if (esPrimo(num) && num > mayorPrimo) {
                mayorPrimo = num;
                posicion = i;
            }
        }

        return posicion;
    }

    public static boolean esPrimo(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    
}
