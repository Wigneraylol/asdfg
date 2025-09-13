#include <iostream>
#pragma once
#include <cstring>


enum EMode {
    kUnsupported,
    kC2F,
    fF2C
};
EMode GetMode(char* mode) {
    if (strcmp( mode,  "c2f") == 0) {
        return kC2F;
}
    if (strcmp( mode,  "f2c") == 0) {
        return fF2C;
}
return kUnsupported;
}
double CelsiusToFahrenheit(double celsius) {
    return celsius *9/5 + 32;
}
double FahrenheitToCelsius (double fahrenheit) {
    return (fahrenheit-32) * 5/9;
}

int main(int argc,char** argv){
    /*
    ./degree_converter <mode> <degree>
    <mode> -- c2f or f2c
    <degree> --double
    */
    if (argc!=3){
        std::cout << "Bad arguments \nUsage: ./degree_converter <mode> <degree>\n" << std::endl;
        return 1;
    }

    double degrees = std::stod(argv[2]);

    EMode mode = GetMode (argv[1]);
    switch (mode) {
    case kC2F:
        std::cout << "Fahrenheit ="<< CelsiusToFahrenheit ( degrees) << std::endl;
        break;
    case fF2C:
        std::cout << "Celsius =" << FahrenheitToCelsius ( degrees) << std::endl;
        break;
    default:
        std::cout << "Unknow mode. Supported: f2c or c2f" << std::endl;
        return 1;
    }
    return 0;
}