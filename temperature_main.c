#include "temperature.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    float userTemp;
    int currentScale;
    int convertScale;
    float *uTemp;
    uTemp = &userTemp;
    printf("Enter the temperature: ");
    scanf("%f", &userTemp);
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &currentScale);
    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &convertScale);

    if(currentScale == 1 && convertScale == 2){
        float converted = celsius_to_fahrenheit(*uTemp);
        printf("Converted temperature: %f\n", converted);
        categorize_temperature(*uTemp);
    }else if(currentScale == 1 && convertScale == 3){
        float converted = celsius_to_kelvin(*uTemp);
        printf("Converted temperature: %f\n", converted);
        categorize_temperature(*uTemp);
    }else if(currentScale == 2 && convertScale == 1){
        float converted = fahrenheit_to_celsius(*uTemp);
        printf("Converted temperature: %f\n", converted);
    }else if(currentScale == 2 && convertScale == 3){
        float converted = fahrenheit_to_kelvin(*uTemp); //try other method
        printf("Converted temperature: %f\n", converted);
    }else if(currentScale == 3 && convertScale == 1){
        float converted = kelvin_to_celsius(*uTemp);
        printf("Converted temperature: %f\n", converted);
    }else if(currentScale == 3 && convertScale == 2){
        float converted = kelvin_to_fahrenheit(*uTemp); //try other method
        printf("Converted temperature: %f\n", converted);
    }else{
        printf("Error, cannot convert between these scales");
    }
    

    
    return 0;
}
