#include<stdio.h>

int main()
{
    printf("\n\n\t\t*सपनों के चक्कर में जीना भूल जाना अच्छा नहीं हैं।*\n\n\n");
    int h, b;
    float area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
        Also, typecasting denominator from int to float 
        to get the output in float
    */
    area = (h*b)/(float)2;
    printf("\n\n\nThe area of the triangle is: %f", area);

    printf("\n\n\t\t\tmade by me !\n\n\n");
    
return 0;
}
