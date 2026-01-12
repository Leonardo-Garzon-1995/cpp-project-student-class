#include <iostream>
#include <string>
#include <vector>
#include "fns.hpp"

Student::Student(const std::string& first_name,  const std::string& last_name, int age, std::vector<double> scores) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->age = age;
    this->scores = scores;
}
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
    result += "  First Name: \x1b[32m\"" + first_name + "\", \x1b[0m \n";
    result += "  Last Name: \x1b[32m\"" + last_name + "\", \x1b[0m\n";
    result += "  Age: \x1b[32m" + std::to_string(age) + ",\x1b[0m \n";
    result += "  Scores: \x1b[33m[ \x1b[32m";

    for (int i = 0; i < scores.size(); i++) {
        result += std::to_string(scores[i]);
        if (i < scores.size() - 1) result += ", ";
    }
    result += "\x1b[33m] \x1b[0m\n}";

    return result;
}

std::ostream& operator<<(std::ostream& os, const Student& s) {
    os << s.get_info();
    return os;
}


