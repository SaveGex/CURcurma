#pragma unmanaged
#include "Main.h"
#include <vector>
std::string Fraction::get_expression_string() {
    return std::string(label_output.begin(), label_output.end());
}

std::vector<char> Fraction::string_processing() {
    std::vector<char> buf_array;

    for (int i = 0; i < label_output.size(); i++) {
        buf_array.push_back(label_output[i]);
        if (i < label_output.size()) {
            buf_array.push_back(' ');
        }
        else {
            buf_array.push_back('\0');
        }
    }
    return buf_array;
}


void Fraction::add_digit(int digit) {
    label_output.push_back('0' + digit);
}

void Fraction::add_symbol(char symbol) {
    label_output.push_back(symbol);
}

void Fraction::delete_symbol() {
    label_output.pop_back();
}

std::string Fraction::get_label() {
    return std::string(label_output.data(), label_output.size());
}

double Fraction::complete_equpation() {
    std::vector<char> buffer_array = string_processing();
    // Преобразование label_output в std::string
    std::string expression_string(buffer_array.begin(), buffer_array.end());
    if (expression_string.empty()) {
        return 0;
    }
    // Используем exprtk для вычисления выражения
    typedef double T;
    typedef exprtk::symbol_table<T> symbol_table_t;
    typedef exprtk::expression<T>   expression_t;
    typedef exprtk::parser<T>       parser_t;

    T x = 0;  // Переменная, если нужно ввести переменную x

    symbol_table_t symbol_table;
    symbol_table.add_variable("x", x);
    symbol_table.add_constants();

    expression_t expression;
    expression.register_symbol_table(symbol_table);

    parser_t parser;
    if (!parser.compile(expression_string, expression)) {
        return 0;
    }

    // Вычисление значения выражения
    double result = expression.value();
    return result;
}


void clear_equpation(Fraction& obj) {
    obj.label_output = {' '};
}