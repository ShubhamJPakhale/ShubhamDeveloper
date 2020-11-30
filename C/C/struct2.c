#include<stdio.h>
int no=10;
struct demo
{
    int i,j;
    int *p;
}obj1={10,20,&no},obj2;
int main()
{
    obj2 = obj1;
    printf("%d %d %d\n",obj1.i,obj1.j,*obj1.p);

    ++*obj1.p;
    obj1.i=10;

        printf("%d %d %d\n",obj2.i,obj2.j,*obj2.p);

    return 0;
}
