public class Employee {

    private String name;
    private static int employeeCount = 0;

    public Employee(){
        employeeCount++;
    }

    public Employee(String name){
        this.name = name;
        employeeCount++;
    }

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public static int getEmployeeCount(){
        return employeeCount;
    }

}