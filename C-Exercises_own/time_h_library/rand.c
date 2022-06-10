#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * good this file is for understand library system call time.h haha
 * I try realize a program for output get a random number 
 * rand is great but always is sequal equal
 */


int main ()
{
    
    int a = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;  

    srand(time(NULL));//puedes usar esta
    
    srand(getpid());//o esta, pero llamas la función una vez "Any"
    
    a = rand();
    printf("rand = %d\n", a);
    a = rand();
    printf("rand = %d\n", a);
    a = rand();
    printf("rand = %d\n", a);
    // you can change scale of numbers 
    v1 = rand() % 100; 
    printf("rand = %d\n",   v1);        // v1 esta en el rango 0 to 99
    v2 = rand() % 100 + 1;  
    printf("rand = %d\n", v2);   // v2 esta en el rango 1 to 100
    v3 = rand() % 30 + 1985; 
    printf("rand = %d\n", v3);  // v3 esta en el rango 1985-2014
    return(0);


}

