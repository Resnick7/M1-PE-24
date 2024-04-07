
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
public class NumTerminados4AL {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();

        System.out.println("Ingrese 10 números enteros:");

        for (int i = 0; i < 10; i++) {
            System.out.print("Número " + (i + 1) + ": ");
            int n = scanner.nextInt();
            numeros.add(n);
        }

        System.out.println("Posiciones de los números terminados en 4:");
        
        for (int i = 0; i < numeros.size(); i++) {
            int num = numeros.get(i);
            if (num % 10 == 4) {
                System.out.println("Número " + num + " en la posición " + (i + 1));
            }
        }
    }
}