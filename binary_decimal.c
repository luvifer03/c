#include<stdio.h>

void main()
{
int n;
int x=0;
int a[y];
int i=0;

printf("enter  number of binary bits");
scanf("%d", &y);
//asking for number of bits

printf("enter the 8 binary number");
scanf("%d", &n);
//taking the input from user

        for(i=0;i<y;i++)
             {
               a[i]=n%10;
               n=n/10;
              }
 //loop to get all the bits 

      for(i=0;i<y:i++)
             {
                x=a[i]*2*i+x;
             }
  printf(x);
  }
