#include<stdio.h>
union hii
{
int a;
char j;
float g;
double u;
};
int main()
{
union hii obj;
obj.a=45;
obj.j="shubham";
obj.g=10.2547f;
obj.u=23.548;
printf("%d\n",obj.u);
return 0;
}
