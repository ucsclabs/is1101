#include <stdio.h>

//define profit(revenue,cost)
#define profit(revenue,cost) (revenue-cost)

//define revenue(price,n)
#define revenue(price,n) (price*n)


//define cost(n)
#define cost 15

//define attendees(price)
#define attendees(price) 15

int main(){
 int price=15;
 int n=attendees(price);
 printf("Ticket Price = %d => profit = %.2f\n",price,profit(revenue(price,n),cost(n)));
 return 0;
}
