#include "temperature.h"

float celsius_to_fahrenheit(float celsius){
    float result = ((9.0 / 5.0) * celsius) + 32;
    return result;
}
