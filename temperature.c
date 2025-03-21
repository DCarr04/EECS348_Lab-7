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
    if(kelvin < 0){
        printf("Invalid kelvin- cannot be negative.");
        return 0.0;
    }
    float result = kelvin - 273.15;
    return result;
}

//probably wont need these two, instead call above functions in main
float kelvin_to_fahrenheit(float kelvin){
    float result = (kelvin - 273.15) * (9.0 / 5.0) + 32;
    return result;
}

float fahrenheit_to_kelvin(float fahrenheit){
    float result = (fahrenheit - 32) * (5.0 / 9.0) + 273.15;
    return result;
}

void categorize_temperature(float celsius){
    if(celsius < 0){
        printf("Temperature category: Freezing\nWeather Advisory: Stay Inside.");
    } else if(celsius < 10){
        printf("Temperature category: Cold\nWeather Advisory: Wear a coat.");
    }else if(celsius < 25){
        printf("Temperature category: Comfortable\nWeather Advisory: You should feel comfortable.");
    }else if(celsius < 35){
        printf("Temperature category: Hot\nWeather Advisory: Stay hydrated.");
    }else{
        printf("Temperature category: Extreme Heat\nWeather Advisory: Stay Inside.");
    }
}