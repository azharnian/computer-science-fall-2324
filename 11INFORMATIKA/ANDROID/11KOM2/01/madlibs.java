import java.util.Scanner;

public class madlibs {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String color, verb2, adj;
        String creatures[] = {"dragon", "big foot"};
        String humans[] = {"carpenter", "smith", "sailor"};

        String playAgain = "";
        do {

            System.out.println("Input your color : ");
            color = scanner.nextLine();

            System.out.print("Input yout verb2 : ");
            verb2 = scanner.nextLine();

            System.out.print("Input your adj : ");
            adj = scanner.nextLine();

            String randomCreature = creatures[(int)(Math.random()*creatures.length)];
            String randomHuman = humans[(int)(Math.random()*humans.length)];

            System.out.println("The " + color + " " + randomCreature + " " + verb2 + " at the " + adj + " " + randomHuman +".");

            System.out.print("Do you want to play again ? ");
            playAgain = scanner.nextLine();

        }while(playAgain.equalsIgnoreCase("y"));

        


        scanner.close();


    }
}
