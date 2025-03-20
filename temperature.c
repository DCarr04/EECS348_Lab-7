#include "temperature.h"

float celsius_to_fahrenheit(float celsius){
    float ratio = 9 / 5;
    float result = (ratio * celsius) + 32;
    return result;
}
