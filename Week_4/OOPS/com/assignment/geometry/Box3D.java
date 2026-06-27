package com.assignment.geometry;

public class Box3D extends Box {
    
    public Box3D(double length, double breadth, double height) {
        super(length, breadth, height);
    }
    
    public double volume() {
        return length * breadth * height;
    }
    
    @Override
    public void display() {
        super.display();
        System.out.println("Volume: " + volume());
        System.out.println("Surface Area: " + area());
    }
}