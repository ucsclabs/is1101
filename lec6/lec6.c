#include <stdio.h>

long int factorial(int);

int main(){
 int n;
 printf("Enter a number : ");
 scanf("%d",&n);
 printf("Factorial %d = %d \n",n,factorial(n));
 return 0;
}
