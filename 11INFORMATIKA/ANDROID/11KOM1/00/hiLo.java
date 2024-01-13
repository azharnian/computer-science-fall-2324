





import java.util.Scanner;
public class hiLo {
    
    public static void main(String[] args) {

        String playAgain = "";
        Scanner scanner = new Scanner(System.in);
        do {
            // System.out.println( (int) (Math.random() * 100) + 1);
            int randomNumber = (int) (Math.random() * 100) + 1;
            System.out.println(randomNumber);

            
            int guess = 0;
            while(guess != randomNumber) {
                System.out.print("Input your guess : ");
                guess = scanner.nextInt();

                if (guess < randomNumber)
                    System.out.println(guess + " is lower, try again!");
                else if (guess > randomNumber)
                    System.out.println(guess + " is higher, try again!");
                else
                    System.out.println("Correct!");
            }
            System.out.print("Do you want to play again (y/n) ? ");
            playAgain = scanner.next(); 
        } while(playAgain.toLowerCase().equals("y") );
        System.out.println("Thankyou for playing! Goodbye.");

          
        scanner.close();
    }

}
