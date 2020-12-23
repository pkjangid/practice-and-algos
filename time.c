#include<stdio.h>
#include<time.h>

int main()
{
    printf("\n\n\t\t welcome to suresh gyan vihar university\n\n\n");

    time_t t;   // not a primitive datatype
    time(&t);

    printf("\nThis program has been writeen at (date and time): %s", ctime(&t));

    printf("\n\n\t\t\tmade by pritam kumar !\n\n\n");
    return 0;
}
