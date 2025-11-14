// В этом файле только функция main и #include-директивы.
#include "calculator.h"

int main() {
    bool success = RunCalculatorCycle();
    return !success; // Вернуть 0 при успешном завершении, иначе 1
}