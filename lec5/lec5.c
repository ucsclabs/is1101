#include <stdio.h>
double interest(double);

int main(){
 double amount=0;
 printf("Enter amount : ");
 scanf("%lf",&amount);
 printf("Interest Earned = %.2lf \n",interest(amount));
}
