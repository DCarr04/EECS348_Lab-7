#include "temperature.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    float userTemp;
    int currentScale;
    int convertScale;
    float *uTemp;
    uTemp = &userTemp;
    float stopCondition = 1.0;
    while(stopCondition != 0.0){
        printf("\nEnter the temperature: ");
        scanf("%f", &userTemp);
        printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        scanf("%d", &currentScale);
        printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        scanf("%d", &convertScale);

        if (currentScale == 3 && *uTemp < 0.0){
            //stopCondition = 1.0;
            printf("Invalid, kelvin cannot be negative.");
        }else if(currentScale == convertScale){
            printf("Error, cannot convert between the same scales.");
        } else{
            stopCondition = 0.0;
        }
    }
    

    if(currentScale == 1 && convertScale == 2){
        float converted = celsius_to_fahrenheit(*uTemp);
        printf("Converted temperature: %f°F\n", converted);
        categorize_temperature(*uTemp);

    }else if(currentScale == 1 && convertScale == 3){
        float converted = celsius_to_kelvin(*uTemp);
        printf("Converted temperature: %fK\n", converted);
        categorize_temperature(*uTemp);

    }else if(currentScale == 2 && convertScale == 1){
        float converted = fahrenheit_to_celsius(*uTemp);
        printf("Converted temperature: %f°C\n", converted);
        categorize_temperature(converted);

    }else if(currentScale == 2 && convertScale == 3){
        /*
        float converted = fahrenheit_to_kelvin(*uTemp); //try other method
        printf("Converted temperature: %fK\n", converted);
        */
        float fah_to_cel = fahrenheit_to_celsius(*uTemp);
        float cel_to_kel = celsius_to_kelvin(fah_to_cel);
        printf("Converted temperature: %fK\n", cel_to_kel);

        float toCelsius = fahrenheit_to_celsius(*uTemp);
        categorize_temperature(toCelsius);

    }else if(currentScale == 3 && convertScale == 1){
        float converted = kelvin_to_celsius(*uTemp);
        printf("Converted temperature: %f°C\n", converted);
        categorize_temperature(converted);

    }else if(currentScale == 3 && convertScale == 2){
        /*
        float converted = kelvin_to_fahrenheit(*uTemp); //try other method
        printf("Converted temperature: %f°F\n", converted);
        */
        float kel_to_cel = kelvin_to_celsius(*uTemp);
        float cel_to_fah = celsius_to_fahrenheit(kel_to_cel);
        printf("Converted temperature: %f°F\n", cel_to_fah);

        float toCelsius = kelvin_to_celsius(*uTemp);
        categorize_temperature(toCelsius);

    }else{
        printf("Error, cannot convert between these scales");
    }
    

    
    return 0;
}
