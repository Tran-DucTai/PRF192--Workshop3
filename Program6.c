#include <stdio.h>

int isFibonacci (int n){
	int t1=1, t2=1, f=1;
	if(n==1) return 1; // n belongs to the Fibonacci sequence
	while(f<n){
		f=t1+t2; // find out the Fibo nu,b? f to n
		t1=t2;
		t2=f;
	}
	return n==f; // n is Fibonacci
}

int main(){
	int n;
	do{
		printf("Accept n= ");
		scanf("%d", &n);
	}
	while(n<1);
	if(isFibonacci(n)==1)
		printf("It is a Fibonacci element");
	else 
		printf("It is not a Fibonacci element");
	return 0;
}
