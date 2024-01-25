public class BankAccount {
    
    private String password = "";
    private double balance = 0;
    public static final double OVERDRAWN_PENALTY = 20.0;

    // CONSTRUCTORS
    public BankAccount(){

    }
    public BankAccount(String password,double initBalance){

    };

    // ACCESSOR
    public double getBalance(){
        return this.balance;
    }

    // MUTATORS
    public void deposit(String inputPassword, double amount){

    }

    public void withdraw(String inputPassword, double amount){

    }



}
