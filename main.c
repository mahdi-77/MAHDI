#include<stdio.h>
int main() {
   int a;
   int b;
   printf("\nSaisie du Premier Nombre:");
   scanf("%d",&a);
   do {
   printf("\nSaisie du Second Nombre:");
   scanf("%d",&b);
   } while(b==0);
   printf("\n%d + %d=%d",a,b,a+b);
   printf("\n%d - %d=%d",a,b,a-b);
   printf("\n%d / %d=%f",a,b,(float)a/b);
   return(0);
}
