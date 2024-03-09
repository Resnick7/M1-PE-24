import java.util.Scanner;
    
public class JAVAvideo26_2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, factorial = 1, suma = 0;

        System.out.print("Ingrese un numero para calcular la suma factorial: ");
        num = sc.nextInt();

        for (int i = 1; i <= num; ++i) {
            factorial = 1;

            for (int j = 1; j <= i; ++j) {
                factorial *= j;
            }
            suma += factorial;
        }

        System.out.println("La suma factorial de " + num + " es: " + suma);

        sc.close();
    }
}

