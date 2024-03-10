/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javavideo14_2;

/**
 *
 * @author WIN10
 */

import java.util.Scanner;

public class JAVAvideo14_2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;

        System.out.print("Ingrese un numero: ");
        num = scanner.nextInt();

        if (num > 0) {
            System.out.println("Es un numero positivo");
        } else if (num == 0) {
            System.out.println("El numero es 0");
        } else {
            System.out.println("Es un numero negativo");
        }
    }
}
