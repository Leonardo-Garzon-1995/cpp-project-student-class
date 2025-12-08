#include <iostream>
#include "fns.hpp"

int main() {
    // Creating the student object
    Student student_1;
    student_1.set_first_name("Sebastian");
    student_1.set_last_name("Rodrigues");
    student_1.set_age(20);
    student_1.set_scores({10, 9.5, 7.3, 6.5, 9.8});

    // printing out the info 
    std::cout << "Name: " << student_1.get_name() << std::endl;
    std::cout << "Age: " << student_1.get_age() << std::endl; 
    student_1.get_scores();

    std::cout << student_1;
}