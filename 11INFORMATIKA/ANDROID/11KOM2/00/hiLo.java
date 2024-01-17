import java.util.Scanner;
public class hiLo {
    public static void main(String[] args) {
        
        // System.out.println((int)(Math.random() * 100) + 1); 
        Scanner scanner = new Scanner(System.in);

        String playAgain = "";
        do {
            int guess = 0, min = 0, max = 0, counter = 0;

            do {

            } while (max - min < 99);

            int randomNumber = (int)(Math.random() * 100) + 1; // 1 s.d. 100
            System.out.println(randomNumber);

            while (guess != randomNumber){

                System.out.print("Input your number : ");
                guess = scanner.nextInt();

                if (guess < randomNumber)
                    System.out.println(guess + " is too low. Try again");
                else if (guess > randomNumber)
                    System.out.println(guess + " is too high. Try again");
                else
                    System.out.println("Correct!");
                counter++;
            }
            System.out.print("Do you want to play again (y/n) ? ");
            playAgain = scanner.next();
        } while (playAgain.toLowerCase().equals("y"));

        System.out.println("Thank you for playing! Goodbye.");
        
        scanner.close();
    }
}
