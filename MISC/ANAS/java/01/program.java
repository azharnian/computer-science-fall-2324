public class program {
    
    public static void main(String[] args) {
        Employee emp = new Employee("Rudi");
        System.out.println(emp.getName());

        BankAccount account = new BankAccount();
        System.out.println(account.getBalance());

    }

}
