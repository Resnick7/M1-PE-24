/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author WIN10
 */
public class NumPrimos2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         int[] primos = new int[10];
        int count = 0;

        for (int i = 100; i <= 300; i++) {
            if (esPrimo(i)) {
                primos[count] = i;
                count++;
                if (count == 10) {
                    break;
                }
            }
        }

        System.out.println("Los 10 números primos entre 100 y 300 son:");
        for (int primo : primos) {
            System.out.println(primo);
        }
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
    

