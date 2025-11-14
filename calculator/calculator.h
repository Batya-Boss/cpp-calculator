// В этом файле объявления функций.
// calculator.h
#pragma once
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
#include <string>

using Number = double;

// Функция чтения числа
bool ReadNumber(Number& result);

// Функция запуска цикла калькулятора
bool RunCalculatorCycle();

#endif // CALCULATOR_H_