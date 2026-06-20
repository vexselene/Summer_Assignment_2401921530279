package com.railway.compartments;

public class General extends Compartment {
    @Override
    public String notice() {
        return "General: Unreserved seating.";
    }
}