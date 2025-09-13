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