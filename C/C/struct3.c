#include<stdio.h>
struct demo
{
    int i,j,k,l;
}obj1={10,20,30,40};

int main()
{
    printf("%d %d %d %d",(&obj1.i),(&obj1.j),*(&obj1.i+1),&obj1+1);
    return 0;
}
