import java.util.Scanner;
public class JAVAvideo24_2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x, y, pow;

        System.out.println("Ingrese el numero y la potencia que quiere calcular: ");
        x = sc.nextInt();
        y = sc.nextInt();

        if (y == 0) {
            System.out.println("Potencia de " + x + "^0 = 1");
        }

        pow = 1;

        for (int i = 0; i < y; i++) {
            pow *= x;
        }

        System.out.println("La potencia de " + x + "^" + y + " es: " + pow);
        
        sc.close();
    }
}