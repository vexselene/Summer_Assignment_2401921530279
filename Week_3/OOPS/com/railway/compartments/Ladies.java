package com.railway.compartments;

public class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies: Reserved for women and children under 12.";
    }
}