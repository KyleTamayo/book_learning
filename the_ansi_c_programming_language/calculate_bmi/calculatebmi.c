#include <stdio.h>

int main(){
    float height;
    float weight;
    float bmi;

    printf("How tall are you? (inches) ");
    scanf("%f", &height);

    printf("How much do you weigh? (pounds) ");
    scanf("%f", &weight);

    height = height / 0.39370;
    weight = weight * 0.4535927;

    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi * 10000);

    return 0;
}