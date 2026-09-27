// copyright (c) all rights reserved
// Created by : Adrian Student
// Date : 26th sept 2026
// this programs asks the user for the diameter of the
// pizza and then calculate and display the prize of
// the pizza with taxes.
#include <iomanip>
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.13;
    const float LABOURcost = 2.00;
    const float RENTALcost = 2.25;
    const float INGREDIENTScost = 1.5;

    // declare variables
    float diameter, total;

    // get the diameter from the user.
    std::cout << "Enter the diameter (inches):";
    std::cin >> diameter;

    // calculate subtotal
    float subtotal = LABOURcost + RENTALcost + INGREDIENTScost * diameter;

    // calculate tax
    float tax = HST * subtotal;

    // calculate the total cost using subtotal
    total = subtotal + tax;

    // Display the total cost
    std::cout << "\n";
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << "\n";
    std::cout << "total cost is = " << total << "$" << std::endl;
}
