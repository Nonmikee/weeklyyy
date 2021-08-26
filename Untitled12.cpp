#include<stdio.h>
int main() {
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);
    float c;
    c = a / b / b;
    printf("%f\n", c);
    if (18.5 > c)
        printf("Underweight");
    else if (24.9 >= c)
        printf("Normal");
    else if (29.9 >= c)
        printf("Overweight");
    else if (40 > c)
        printf("Obese");

    return 0;
}
