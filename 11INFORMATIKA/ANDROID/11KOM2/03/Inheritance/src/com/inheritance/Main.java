package com.inheritance;

public class Main {

    public static void main(String[] args){
        Student student = new Student();
        UnderGrad mhs = new UnderGrad();
        GradStud mhsS2 = new GradStud();

        Student s = new Student();
        Student g = new GradStud();
        Student u = new UnderGrad();

        // Not Valid
        //
        //

        System.out.println(student.getName());
        System.out.println(mhs.getName());
        System.out.println(mhsS2.getName());
    }
}
