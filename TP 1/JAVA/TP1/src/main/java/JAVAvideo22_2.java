import java.util.Scanner;

public class JAVAvideo22_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        int i = -1;

        do {
            System.out.print("Ingrese un numero: ");
            num = sc.nextInt();
            i++;
        } while (num != 0);

        System.out.println("Ingreso " + i + " numeros mayores a 0");

        sc.close();
    }
}
