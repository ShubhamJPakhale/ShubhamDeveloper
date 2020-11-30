#include<stdio.h>

void pattern(int ino)
{
  if(ino<0)
  {
      ino=-ino;
  }

 /* 
 for(int i=ino;i>0;i--)
  {
      printf("%d\t #\t",i);
  }
*/

  for(int i=1;i<=ino;i++)
  {
      printf("%d\t #\t",i);
  }
}

int main()
{
    int ivalue=0;
    printf("Enter number of elements :");
    scanf("%d",&ivalue);

    pattern(ivalue);

    return 0;
}