#include <stdio.h>

int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x*y;
    int a=x+y;
    // return sum;
}
int main()
{
    int x=add();
    printf("%d",x);
    printf("%d",add());
}