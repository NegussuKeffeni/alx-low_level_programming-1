#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* 
 * More headers goes here.
 * betty style doc for function main goes there
 */

int main(void){

    int n;
    srand(time(0));
    
    n = rand() - RAND_MAX / 2;
    
    if(n > 0){
        printf("%d is positive", n);
    }

    if (n < 0){
        printf("%d is negative", n);
    }

    if (n == 0){
        printf("%d is zero", n);
    }

    printf("%d", n);

   return(0);
}