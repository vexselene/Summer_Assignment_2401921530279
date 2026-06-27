package com.assignment.geometry;

public class Box {
    protected double length;
    protected double breadth;
    protected double height;
    
    public Box(double length, double breadth, double height) {
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }
    
    public double area() {
        return 2 * (length * breadth + breadth * height + height * length);
    }
    
    public void display() {
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
        System.out.println("Height: " + height);
    }
}