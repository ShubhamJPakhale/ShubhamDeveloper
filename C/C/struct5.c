#include<stdio.h>
struct demo
{
    char *p;
};
int main()
{
    struct demo obj1,obj2;
    obj1.p=(char *)malloc(20);
    strcpy(obj1.p,"Marvellous Infosystem");
    printf("%s\n",obj1.p);
    obj2 = obj1;
    strlwr(obj1.p);
    printf("%s\n",obj1.p);
    return 0;
}
