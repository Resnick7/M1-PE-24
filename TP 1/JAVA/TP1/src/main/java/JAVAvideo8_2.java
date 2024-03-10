/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.javavideo8_2;

/**
 *
 * @author WIN10
 */

import java.util.Scanner;

public class JAVAvideo8_2 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float notaAlumno1, notaAlumno2, notaAlumno3, notaAlumno4, notaMedia = 0;

        System.out.print("Ingresa la nota del alumno 1: ");
        notaAlumno1 = scanner.nextFloat();
        System.out.print("Ingresa la nota del alumno 2: ");
        notaAlumno2 = scanner.nextFloat();
        System.out.print("Ingresa la nota del alumno 3: ");
        notaAlumno3 = scanner.nextFloat();
        System.out.print("Ingresa la nota del alumno 4: ");
        notaAlumno4 = scanner.nextFloat();

        notaMedia = (notaAlumno1 + notaAlumno2 + notaAlumno3 + notaAlumno4) / 4;

        System.out.println("La nota final media de los cuatro alumnos es: " + notaMedia);
    }
}
