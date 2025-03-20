#include "temperature.h"

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
        printf("%f\n", converted);
    }else{
        printf("Error, cannot convert between these scales");
    }
    

    
    return 0;
}
