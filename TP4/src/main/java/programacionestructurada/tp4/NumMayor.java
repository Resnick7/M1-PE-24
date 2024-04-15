
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author WIN10
 */
public class NumMayor {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
                Scanner scanner = new Scanner(System.in);
        
        int[] nums = new int[10];
        for (int i = 0; i < 10; i++) {
            System.out.print("Ingrese el número " + (i + 1) + ": ");
            nums[i] = scanner.nextInt();
        }
        
        int num_mayor = nums[0];
        int posicionMaximo = 0;
        for (int i = 1; i < 10; i++) {
            if (nums[i] > num_mayor) {
                num_mayor = nums[i];
                posicionMaximo = i;
            }
        }
        System.out.println("El mayor numero ingresado fue el " + num_mayor + " y esta en la posicion " + (posicionMaximo + 1));
    }
}
    
