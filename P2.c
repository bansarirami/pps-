#include<stdio.h>

int main()

{
   int a, b, c;
   printf("value of a, b & c");
   scanf("%d %d %d", &a, &b, &c);

   if (a>b && a>c)
   {
    printf("a is largest number");
   }

   else if (b>a && b>c)
   {
    printf("b is largest");
   }
   else if (c>a && c>b)
   {
    printf("c is largest");
   }
    
    return 0; 
}