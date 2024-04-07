
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author WIN10
 */
public class RepeticionesNumMayor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] nums = new int[10];

        // Leer los números enteros
        System.out.println("Ingrese 10 números enteros:");
        for (int i = 0; i < 10; i++) {
            System.out.print("Número " + (i + 1) + ": ");
            nums[i] = scanner.nextInt();
        }

        // Encontrar el mayor número
        int mayor = nums[0];
        for (int i = 1; i < 10; i++) {
            if (nums[i] > mayor) {
                mayor = nums[i];
            }
        }

        // Contar cuántas veces está repetido el mayor
        int contador = 0;
        for (int i = 0; i < 10; i++) {
            if (nums[i] == mayor) {
                contador++;
            }
        }
        
        System.out.println("El mayor número ingresado fue: " + mayor);
        System.out.println("Se repite " + contador + " veces.");
    }
 }
    
