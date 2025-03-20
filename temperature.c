#include "temperature.h"

float celsius_to_fahrenheit(float celsius){
    float result = ((9.0 / 5.0) * celsius) + 32;
    return result;
}

float fahrenheit_to_celsius(float fahrenheit){
    float result = (5.0 / 9.0) * (fahrenheit - 32);
    return result;
}

float celsius_to_kelvin(float celsius){
    float result = celsius + 273.15;
    return result;
}

float kelvin_to_celsius(float kelvin){
    float result = kelvin - 273.15;
    return result;
}

float kelvin_to_fahrenheit(float kelvin){
    float result = (kelvin - 273.15) * (9.0 / 5.0) + 32;
    return result;
}

float fahrenheit_to_kelvin(float fahrenheit){
    float result = (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
    return result;
}