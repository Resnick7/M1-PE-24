package programacionestructurada.tp4;

import java.util.Scanner;

public class NumTerminados4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] num = new int[10];

        for (int i = 0; i < num.length; i++) {
            System.out.print("Ingrese el número en la posición [" + i + "]: ");
            num[i] = sc.nextInt();
        }

        System.out.println("Los números terminados en 4 se encuentran en: ");
        for (int i = 0; i < num.length; i++) {
            if (num[i] % 10 == 4) {
                System.out.println("[ "+ i +" ]");
            }
        }
    }
}
