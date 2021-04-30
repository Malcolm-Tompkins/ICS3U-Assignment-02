// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 29, 2021
// This program calculates the surface area of a desired pyramid
#include <iostream>
int width, height, base_area, lateral_area, total_area;
int main() {
    // Function that calculates surface area of pyramid
    std::cout << "Input width of pyramid: ";
    std::cin >> width;
    std::cout << "Input height of pyramid: ";
    std::cin >> height;
    // User input
    base_area = width * width;
    lateral_area = (height * width) / 2;
    total_area = base_area + lateral_area;
    // Process
    std::cout << "The area of the base is: ";
    std::cin >> base_area;
    std::cout << "The lateral area is: ";
    std::cin >> lateral_area;
    std::cout << "The total area is: ";
    std::cin >> total_area;
    // Output
}
