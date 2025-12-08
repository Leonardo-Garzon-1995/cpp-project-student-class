#pragma once
#include <string>
#include <vector>
#include <iostream>

class Student {
    std::string first_name;
    std::string last_name;
    int age;
    std::vector<double> scores;

    public:
        std::string get_name();
        int get_age();
        void get_scores();
        

        void set_first_name(std::string text);
        void set_last_name(std::string text);
        void set_age(int num);

        void set_scores(std::vector<double> vec);

        // allow printing with cout 
        std::string get_info() const;
        friend std::ostream& operator<<(std::ostream& os, const Student& s);
};