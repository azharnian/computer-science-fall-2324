
public class Employee {

    public static int numberOfEmp = 0;
    private String name;

    // CONSTRUCTOR
    public Employee(){
        numberOfEmp++;
    }

    public Employee(String name){
        this.name = name;
        numberOfEmp++;
    }

    // ACCESSOR
    public String getname(){
        return this.name;
    }

    // MUTATORS
    public void setName(String new_name){
        this.name = new_name;
    }

    // STATIC METHOD
    public static int getNumberOfEmp(){
        return numberOfEmp;
    }

    public static void main(String[] args) {
        Employee emp1 = new Employee();
        Employee emp2 = new Employee("Jane");

        System.out.println(Employee.getNumberOfEmp());

        emp1.setName("John");
        System.out.println(emp1.getname());
    }

    
}
