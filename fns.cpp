#include <iostream>
#include <string>
#include <vector>
#include "fns.hpp"

std::string Student::get_name() {
    return last_name + ", " + first_name;
}

int Student::get_age() {
    return age;
}

void Student::get_scores() {
    for (int i = 0; i < scores.size(); i++) {
        std::cout << scores[i] << std::endl;
    }
}

void Student::set_first_name(std::string text) {
    first_name = text;
}

void Student::set_last_name(std::string text) {
    last_name = text;
}

void Student::set_age(int num) {
    age = num;
}

void Student::set_scores(std::vector<double> arr) {
    scores = arr;
}

std::string Student::get_info() const {
    std::string result = "{ \n";
    result += "  First Name: \"" + first_name + "\", \n";
    result += "  Last Name: \"" + last_name + "\", \n";
    result += "  Age: " + std::to_string(age) + ", \n";
    result += "  Scores: [";

    for (int i = 0; i < scores.size(); i++) {
        result += std::to_string(scores[i]);
        if (i < scores.size() - 1) result += ", ";
    }
    result += "] \n}";

    return result;
}

std::ostream& operator<<(std::ostream& os, const Student& s) {
    os << s.get_info();
    return os;
}


