#include"header.h"

int divide(int i, int j)
{
    int ans=0;
     if(j>i)
     {
         return -1;
     }
     
     ans=(i/j);
     
     return ans;
}