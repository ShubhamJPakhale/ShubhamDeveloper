#include<stdio.h>
#include<string.h>
int main()
{
    char info[50]="Shubham Don is here";
    char city[100]="Amalner";
    char state[25]="Maharashtra";
    int population=2500;
    sscanf("%s%s%d",city,state,population);
    strcpy(city,state);
    printf("%s\n",city);
    int a=strlen(info);
    int b=strlen(city);
    printf("%d\n",a);
    printf("%d people live in amalner ,%s\n",population,city,state);
    if(a==b)
    {
        printf("words are equal");
        return 0;
    }
    else if(a<b)
    {
        printf("words are greater in %s",city);
        return -1;
    }
    else if(a>b)
    {
        printf("words are less in %s",city);
        return 1;
    }

}
