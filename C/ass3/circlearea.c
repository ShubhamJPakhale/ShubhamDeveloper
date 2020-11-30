#include<stdio.h>

float CircleArea(float fradius)
{
    float PI=3.14;
    float farea=0.0;

    farea=PI * fradius * fradius;

    return farea;
}

int main()
{
    float fino=0.0;
    float fret=0.0;

    printf("Enter radius : \n");
    scanf("%f",&fino);

    fret=CircleArea(fino);

    printf("Area of circle is %.4f",fret);

    return 0;
}