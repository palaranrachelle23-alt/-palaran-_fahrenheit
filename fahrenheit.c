# -palaran-_fahrenheit
#include <stdio.h>

int main() {
  float fahrenheit;
  float celsius;

  //input temperature value in Fahrenheit    
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  //Fahrenheit to Celsius
  celsius = (fahrenheit - 32) * 5 / 9;

  //equivalent temperature in Celsius
  printf("Temperature in Celsius: %.2f", celsius);

  return 0;
}
