#include<stdio.h>

double FhToCelsius(float fno)
{
    double dtemp=0.0;

    dtemp=((5/9)*(fno - 32));
    printf("%d",dtemp);
    return dtemp;
}

int main()
{
    int freh=0.0;
    double dret=0.0;

    printf("Enter temperature in ferehite :\n");
    scanf("%d",&freh);

    dret=FhToCelsius(freh);

    printf("%.4f",dret);

    return 0;
}