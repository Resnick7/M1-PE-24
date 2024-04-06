package programacionestructurada.tp4;

import java.util.ArrayList;

public class NumPrimos2AL {
    public static void main(String[] args) {
        ArrayList<Integer> primos = new ArrayList<>();
        int i = 100;
        
        while (primos.size() < 10) {
            if (esPrimo(i)) {
                primos.add(i);
            }
            i++;
        }

        System.out.println("Los 10 primeros números primos entre 100 y 300 son: ");
        for (int primo : primos) {
            System.out.println(primo);
        }
    }

    public static boolean esPrimo(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
