#include<stdio.h>

float AreaRect(float fno1,float fno2)
{
    float fresult=0.0;

    fresult=fno1 * fno2;

    return fresult;
}
int main()
{
    float fheight=0.0,fwidth=0.0;
    float fret=0.0;

    printf("Enter height and width :\n");
    scanf("%f %f",&fheight,&fwidth);

    fret=AreaRect(fheight,fwidth);

    printf("Area of rectangle is %.4f",fret);

    return 0;
}