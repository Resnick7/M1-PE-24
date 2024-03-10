/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javavideo16_2;

/**
 *
 * @author WIN10
 */
import java.util.Scanner;

public class JAVAvideo16_2 {

     public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float num1, num2, num3, num4;

        System.out.print("Ingrese el primer numero: ");
        num1 = scanner.nextFloat();
        System.out.print("Ingrese el segundo numero: ");
        num2 = scanner.nextFloat();
        System.out.print("Ingrese el tercer numero: ");
        num3 = scanner.nextFloat();
        System.out.print("Ingrese el cuarto numero: ");
        num4 = scanner.nextFloat();

        if (num1 == num4) {
            System.out.println("El cuarto numero coincide con el primer numero");
        } else if (num2 == num4) {
            System.out.println("El cuarto numero coincide con el segundo numero");
        } else if (num3 == num4) {
            System.out.println("El cuarto numero coincide con el tercer numero");
        } else {
            System.out.println("El cuarto numero no coincide con ninguno de los numeros anteriores");
        }
    }
}
