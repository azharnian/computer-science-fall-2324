public class Main {

    public static int findMin(int[] arr){

        return 0;
    }

    public static void changeEven(int[] arr){
        for (int i = 0; i < arr.length; i+=2){
            arr[i] = 0;
        }
    }
    public static void main(String[] args) {
        int[] coins = new int[4];
        String[] names = {"andi", "budi", "cindy"};

        coins[0] = 1;
        coins[1] = 5;
        coins[2] = 10;
        coins[3] = 25;

        for (int coin : coins) {
            System.out.printf(coin + " ");
        }
        System.out.println();

        for (int i = 0; i < names.length; i++)
        {
            System.out.printf(names[i]+" ");
        }
        System.out.println();

        changeEven(coins);
        for (int coin : coins) {
            System.out.printf(coin + " ");
        }
        System.out.println();

        System.out.println(coins[findMin(coins)]);
    }
}
