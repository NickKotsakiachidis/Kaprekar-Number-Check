#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k,n,r,i,f,in,Y,A,B;
    scanf("%d",&k);
    in=k;
    k=k*k;
    n=1;
    f=10;
    i=10;
    for (;f>0;i*=10)
    {
         r=k/i;
         if (r<10)
         {
             f=0;
         }
         n+=1;
    }
    for (;i>=10;i/=10)
    {
        A=k/i;
        B=k%i;
        if (in==A+B)
        {
            Y=1;
            break;
        }
    }
    if (Y==1)
    {
        printf("YES IT IS KAPREKAR");
    }
    else
    {
        printf("NO ITS NOT KAPREKAR");
    }
}
