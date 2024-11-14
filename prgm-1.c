#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,temp;
    printf("Enter the two numbers\n");
    scanf("%d%d,&a,&b");
    printf("Before swapping a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d",a,b);
}