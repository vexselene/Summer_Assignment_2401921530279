package com.assignment.outer;

public class Outer {
    
    public void display() {
        System.out.println("Outer class display() called");
    }
    
    // Inner class
    public class Inner {
        public void display() {
            System.out.println("Inner class display() called");
        }
    }
    
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.display();
        
        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}