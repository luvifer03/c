#include<iostream.h>
#include<conio.h>

void main()
{
int n;
int x=0;
int a[y];
int i=0;

cout<<"enter  number of binary bits";
cin>>y;
//asking for number of bits

cout<<"enter the 8 binary number";
cin>>n;
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
  cout<<x;
  }
