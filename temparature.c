#include <stdio.h>

float contemp(float cel);
int main() {
   float c;
   printf("Enter your hotness (in celsius):\n");
   scanf("%f",&c);
    float far = contemp(c);
    
   printf(" Hotness in fahrenheit : %f",far);
   return 0;
}
float contemp(float cel) {
   float far = cel * (9.0/5.0) + 32;
    return far;
}