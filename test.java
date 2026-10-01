import java.util.Random;
import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        int guess = 0;

        int rdm100 = random.nextInt(100);
        System.out.println("1. Guess the number from 1-100");
        
        while (guess != rdm100) {
            System.out.print("Input a number: ");
            String num = scanner.nextLine();
            if (Integer.parseInt(num) > rdm100) {
                System.out.println("Lower");
                continue;
            } else if (Integer.parseInt(num) < rdm100) {
                System.out.println("Higher");
                continue;
            } else {
                System.out.println("You've guessed it right!");
                break;
            }
        }

        System.out.println("\n2. TikTok Numbers");

        for (int num1to50 = 1; num1to50 <= 50; num1to50++) {
             if ((num1to50 % 3 == 0) && (num1to50 % 5 == 0)) {
                System.out.println("Tiktok");
            } else if (num1to50 % 3 == 0) {
                System.out.println("Tik");
            } else if (num1to50 % 5 == 0) {
                System.out.println("Tok");
            } else {
                System.out.println(num1to50);
            }
        }

        System.out.println("\n3.Input lowercase characters to translate into UPPERCASE: ");
        String word = scanner.nextLine();
        System.out.println(word.toUpperCase());

        scanner.close();
    }
}