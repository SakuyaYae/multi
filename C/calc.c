// @author SakuyaYae
#include <stdio.h>

float area(int raid);

int main(void){
    float res;
    int number;

    printf("Enter number: \n");
    scanf("%d", &number);

    res = area(number);
    printf("%f", res);

    return 0;
}

float area(int raid){
    float res;

    res = 3.14 * raid * raid;

    return res;
}