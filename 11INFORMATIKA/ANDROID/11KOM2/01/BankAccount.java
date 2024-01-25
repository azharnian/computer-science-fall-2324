public class BankAccount {
    
    public static double OverdrawnPenalty = 20.00;
    private String accNumber  = String.format("AC%d", (int) Math.random()*900 + 100);
    private String pinSecurity;
    private double balance = 0;

    public BankAccount(){
        this.pinSecurity = "";
    }

    public BankAccount(String pin){
        this.pinSecurity = pin;
    }

    public double getBalance(){
        return this.balance;
    }

    public void deposit(String pin,double amount){
        if (pin == this.pinSecurity){
            this.balance += amount;
        }
    }

    public void withdraw(){

    }

    public static void changeOverdrwanPenalty(){

    }

    public static void main(String[] args) {
        BankAccount bankAcc1 = new BankAccount();
        BankAccount bankAcc2 = new BankAccount("12345");

        System.out.println(bankAcc1.getBalance());
    }



}
