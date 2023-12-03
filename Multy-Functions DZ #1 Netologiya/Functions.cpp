#include "Functions.h"
#include <cmath>
#include <iostream>

double Sum(double num1, double num2)
{
    return num1 + num2;
}

double Sub(double num1, double num2)
{
    return num1 - num2;
}

double Multiupl(double num1, double num2)
{
    return num1 * num2;
}

double Div(double num1, double num2)
{
    if (num2 == 0) {
        std::cout << "ОШИБКА!!! На ноль делить нельзя!!!" << std::endl;
    }
    return num1 / num2;
    
}

double Exp(double num1, double num2)
{
    return std::pow(num1, num2);
}
