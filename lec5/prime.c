#include <stdio.h>

int prime(int);

int main(){
 int n=0;
 printf("Enter a Number :");
 scanf("%d",&n);

 if(prime(n)) printf("%d is a prime number. \n",n);
 else printf("%d is not a prime number. \n",n);
 return 0;
}

int prime(int n){
for (i = 2; i <= n/ 2; i++) {
        if (n % i == 0) {
            return 0;
            break;
        } else {
            return 1;
}
