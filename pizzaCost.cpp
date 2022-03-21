// Copyright (c) 2022 Mr. Riscalas All rights reserved
//
// Created By: Nicolas Riscalas
// Created On March 21, 2022
// Calculate the cost of a pizza

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

int main() {
    float diameter, subtotal, tax, total;
    cout << "Enter the diameter of the pizza (inches): \n";
    cin >> diameter;
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = HST * subtotal;
    total = subtotal + tax;

    printf("The total cost is = $%1.2f", total);


    return 0;
}
