
#include <stdio.h>
void pattern();

int main(){
	int n;
	printf("Enter value of n: ");
        scanf("%d", &n);
        pattern();
}

void pattern(){
int i; int j;
for(i=1;i<=4;i++){
for(j=1; j<=i ; j++){
printf("*");
}
print("\n");
}
}

