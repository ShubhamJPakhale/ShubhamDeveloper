#include<stdio.h>
struct demo
{
    int i;
    char ch;
    int j;
};
int main()
{
    struct demo obj;
    if(sizeof(obj) == (sizeof(obj.i)+ sizeof(obj.j) + sizeof(obj.ch)))
    {
        printf("Marvellous");
    }
    else
    {
        printf("Infosystems");
    }
    printf("%d",sizeof(obj.ch));
    return 0;
}
