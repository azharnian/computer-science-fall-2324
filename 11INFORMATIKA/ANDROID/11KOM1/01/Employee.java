
public class Employee {

    private String name;
    public static int numberOfEmp = 0;

    // CONSTRUCTORS
    public Employee(){
        numberOfEmp++;
    }

    public Employee(String name){
        this.name = name;
        numberOfEmp++;
    }

    // ACCESSOR or Getter Method
    public String getName(){ return this.name; }

    // MUTATOR or Setter Method
    public void setName(String newName){this.name = newName;}

    public static int getNumberOfEmp(){return numberOfEmp;}
    
}
