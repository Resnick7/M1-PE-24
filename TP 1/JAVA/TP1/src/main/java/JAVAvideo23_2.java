/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javavideo23_2;

import java.util.Scanner;

/**
 *
 * @author WIN10
 */
public class JAVAvideo23_2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float temperatura, suma = 0, media, temperaturaAlta = Float.MIN_VALUE, temperaturaBaja = Float.MAX_VALUE;

        for (int i = 0; i < 24; i += 4) {
            System.out.print("Cual fue la temperatura a las " + i + "? ");
            temperatura = scanner.nextFloat();

            suma += temperatura;

            if (temperatura > temperaturaAlta) {
                temperaturaAlta = temperatura;
            }
            if (temperatura < temperaturaBaja) {
                temperaturaBaja = temperatura;
            }
        }

        media = suma / 6;

        System.out.println("La temperatura media es: " + media);
        System.out.println("La temperatura mas alta fue: " + temperaturaAlta);
        System.out.println("La temperatura mas baja fue: " + temperaturaBaja);
    }
}
