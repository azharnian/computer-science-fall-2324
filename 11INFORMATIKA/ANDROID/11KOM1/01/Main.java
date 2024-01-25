public class Main {
    public static void main(String[] args) {
        Employee emp_1 = new Employee();
        Employee emp_2 = new Employee("Jane");

        System.out.println(Employee.getNumberOfEmp());

        System.out.println(emp_1.getName());
        emp_1.setName("John");
        System.out.println(emp_1.getName());

        System.out.println(emp_2.getName());
    }
}
