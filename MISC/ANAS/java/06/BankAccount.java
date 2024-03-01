public class BankAccount {
    private double balance;

    public BankAccount(double acctBalance)
    {
        balance = acctBalance;
    }

    public void deposit(double amount)
    {
        balance += amount;
    }

}
