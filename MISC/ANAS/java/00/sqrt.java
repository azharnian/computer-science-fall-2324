public class sqrt {
    public static void main(String[] args) {
        double x = (0.300000000000000004);
        double result1 = Math.pow(x, 0.5);
        double result2 = Math.sqrt(x);
        System.out.println(result1);
        System.out.println(result2);
        double tolerance = 1e-20; // or any other small value

        if (Math.abs(result1 - result2) < tolerance) {
            System.out.println("Results are approximately equal");
        } else {
            System.out.println("Results are not equal");
        }

    }
}
