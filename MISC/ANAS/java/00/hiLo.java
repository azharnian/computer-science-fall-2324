import java.util.Scanner;
public class hiLo {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String playAgain = "";
        do {

            // Create a random number for the user to guess
            // System.out.println(Math.random());
            int randomNumber = (int) (Math.random() * 100 + 1); // 1 s.d. 100
            // System.out.println(randomNumber);

            int guess = 0;
            while ( guess != randomNumber) {
                System.out.println("Guess a number between 1 and 100: ");

                guess = scanner.nextInt();
                if (guess < randomNumber)
                    System.out.println(guess + " is too low. Try again.");
                else if (guess > randomNumber)
                    System.out.println(guess + " is too high. Try again.");
                else
                    System.out.println(guess + " is correct. You win!");
                // System.out.println("You entered "+ guess + ".");
        
            } // End of while loop for guessing
            System.out.println("Would you like to play again (y/n)? ");
            playAgain = scanner.next();
        // } while (playAgain.toLowerCase() != "y");
        } while (playAgain.equalsIgnoreCase("y"));

        System.out.println("Thank you for playing! Goodbye.");
        scanner.close();
    }

}
