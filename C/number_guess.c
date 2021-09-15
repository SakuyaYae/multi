// @author SakuyaYae
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int number;
    int rand_number = rand() % 100 + 1;
    
    while(number != rand_number){

        printf("Enter number: \n");
        scanf("%d", &number);


        if(number > rand_number){
            printf("guess was to high\n\n");
        }
        else if(number < rand_number){
            printf("guess was to low\n\n");
        }
    }

    printf("Well done");
        return 0;
}