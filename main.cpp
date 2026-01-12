#include <iostream>
#include "fns.hpp"

int main() {
    // Creating the student object
    Student student_1("Sebastian", "Rodrigues", 20, {10, 9.5, 7.3, 6.5, 9.8});

    // printing out the info 
    std::cout << "Name: " << student_1.get_name() << std::endl;
    std::cout << "Age: " << student_1.get_age() << std::endl; 
    student_1.get_scores();

    std::cout << student_1;
}