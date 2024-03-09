import java.util.Scanner;

public class JAVAvideo28_2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int alumnos = 5;
        int aprobadosTodos = 0;
        int aprobadosUno = 0;
        int aprobadosUltimo = 0;

        for (int i = 0; i < alumnos; i++) {
            boolean examen1, examen2, examen3;

            System.out.print("Ingrese 1 si el alumno " + (i + 1) + " aprobó el examen 1, de lo contrario ingrese 0: ");
            examen1 = sc.nextInt() == 1;

            System.out.print("Ingrese 1 si el alumno " + (i + 1) + " aprobó el examen 2, de lo contrario ingrese 0: ");
            examen2 = sc.nextInt() == 1;

            System.out.print("Ingrese 1 si el alumno " + (i + 1) + " aprobó el examen 3, de lo contrario ingrese 0: ");
            examen3 = sc.nextInt() == 1;

            if (examen1 && examen2 && examen3) {
                aprobadosTodos++;
            }

            if (examen1 || examen2 || examen3) {
                aprobadosUno++;
            }

            if (examen3) {
                aprobadosUltimo++;
            }
        }

        System.out.println(aprobadosTodos + " alumnos aprobaron todos los exámenes, es un " + (aprobadosTodos * 100) / 5 + "% de la clase");
        System.out.println(aprobadosUno + " alumnos aprobaron al menos 1 examen, es un " + (aprobadosUno * 100) / 5 + "% de la clase");
        System.out.println(aprobadosUltimo + " alumnos aprobaron el último examen, es un " + (aprobadosUltimo * 100) / 5 + "% de la clase");

        sc.close();
    }
}

