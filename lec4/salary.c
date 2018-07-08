#include <stdio.h>
int normalincome(int);
int OT_income(int);
int total_income(int,int);
int tax(int);
int takehome(int,int);

int main(){
	int a,b,x,z,e,d,t,c,f,r,v,w;
	printf("Enter the OT working hours :");
	scanf("%d" , &a);
	printf("Enter the normal hours :");
	scanf("%d" , &b);
	c=normalincome(x);
	printf("normal income : %d",c);
	d=OT_income(z);
	printf("OT_income : %d" , d);
	e=total_income(c,d);
	printf("total income : %d" , e);
	t=tax(w);
	printf("tax : %d" , t);
	r=takehome(f,v);
	printf("takeHomE : %d" , r);
	
	
	
	

return 0;
}
int normalincome(int y){
	return 150*y*4;
}
int OT_income( int p){
	return 75*p*4;
}
int total_income(int o , int i){
	return o+i;
}
int tax(int e){
	return e*0.1;
}
int takehome(int t,int r){
	return t-r;
}


