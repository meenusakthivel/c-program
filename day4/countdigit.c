#include <stdio.h>
int main()
{
 int x;
 scanf("%d",&x);
 int count=0;
 while(x>0){
     x/=10;
     count++;
 }
 printf("%d",count);
}