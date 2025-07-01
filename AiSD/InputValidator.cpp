#include "InputValidator.h"

int InputValidator::Check() {
    int input_value;
    while (true) {
        std::cin >> input_value;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, попробуйте еще раз" << std::endl;
        } else {
            break;
        }
    }
    return input_value;
}

int InputValidator::CheckNonNeg() {
    int input_value;
    while (true) {
        std::cin >> input_value;
        if (std::cin.fail() || input_value < 0) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Ошибка ввода, введите неотрицательное число" << std::endl;
        } else {
            break;
        }
    }
    return input_value;
}
