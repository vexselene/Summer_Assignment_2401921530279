package com.railway.demo;

import com.railway.compartments.Compartment;
import com.railway.compartments.FirstClass;
import com.railway.compartments.Ladies;
import com.railway.compartments.General;
import com.railway.compartments.Luggage;
import java.util.Random;

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();
        
        for (int i = 0; i < compartments.length; i++) {
            int type = rand.nextInt(4) + 1;
            
            switch (type) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
                default:
                    throw new IllegalArgumentException("Invalid compartment type: " + type);
            }
        }
        
        System.out.println("=== Indian Railways - Compartment Notices ===");
        System.out.println("===============================================\n");
        
        for (int i = 0; i < compartments.length; i++) {
            System.out.printf("Coach %-2d: %s%n", (i + 1), compartments[i].notice());
        }
    }
}