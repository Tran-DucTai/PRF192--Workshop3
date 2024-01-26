#include <stdio.h>

double factorial( int n){ // tinh giai thua
	double p=1;
	int i;
	for(i=2; i<=n; i++) 
	p*=i;
	return p;
}

int main(){
	int n;
	double result;
	do{
		printf("Accept n= ");
		scanf("%d", &n);
	}
	while(n<0);
	result = factorial(n);
	printf("result: %lf", result);
	return 0;
}
