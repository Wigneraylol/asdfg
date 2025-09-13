#pragma once
#include <cstring>

enum EMode {
    kUnsupported,
    kC2F,
    fF2C
};

EMode GetMode(char* mode);

double CelsiusToFahrenheit(double celsius);

double FahrenheitToCelsius (double fahrenheit);