/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javavideo18_2;

import java.util.Scanner;

/**
 *
 * @author WIN10
 */
public class JAVAvideo18_2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opc, num, cubo;

        System.out.println("Ingresa un numero: ");
        num = scanner.nextInt();
        System.out.println("Que quieres hacer con ese numero?");
        System.out.println("1. Saber el valor del numero al cubo");
        System.out.println("2. Saber si es par o impar");
        System.out.println("3. Salir");
        System.out.print("Opcion: ");
        opc = scanner.nextInt();

        switch (opc) {
            case 1:
                cubo = (int) Math.pow(num, 3);
                System.out.println("El valor de " + num + " al cubo es: " + cubo);
                break;
            case 2:
                if (num % 2 == 0) {
                    System.out.println("Es un numero par");
                } else {
                    System.out.println("Es un numero impar");
                }
                break;
            case 3:
                break;
            default:
                System.out.println("Opción no válida");
                break;
        }
    }
}
