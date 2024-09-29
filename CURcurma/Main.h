#ifndef MAIN_H
#define MAIN_H
#include <string>
#include <vector>
#include "exprtk.hpp"

class Fraction {
private:
    std::vector<char> label_output;
    std::vector<std::vector<char>> results_for_history;
    std::string get_expression_string();
    std::vector<char> string_processing();
public:
    Fraction(std::vector<char> label_output, std::vector<std::vector<char>> results_for_history) : label_output{ label_output }, results_for_history{ results_for_history } {};
    Fraction(Fraction &obj) {
        this->label_output = obj.label_output;
        this->results_for_history = obj.results_for_history;
    };
    Fraction() : Fraction({}, {{}}) { };
    Fraction operator=(const Fraction& obj) {
        if (this == &obj) {
            return *this;
        }
        this->label_output = obj.label_output;
        this->results_for_history = obj.results_for_history;
        return *this;
    }

    void add_digit(int digit);
    void add_symbol(char symbol);
    void delete_symbol();
    double complete_equpation();
    std::string get_label();
    friend void clear_equpation(Fraction& obj);
};

#endif // MAIN_H
