#include <stdio.h>
#include <math.h>

//int prime( int n){
//	int m= sqrt(n); // m: square root of n -> m la can bac 2 cua n
//	int i;
//	if(n<=2) return 0;
//	for(i=2; i<=m; i++)
//		if(n%i==0) return 0; // n is not a prime
//	return 1; // n is a prime
//}

int prime(int n){
	int i;
	if(n <=2) return 0;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0)
		return 0;
	}
	return n>1;
}

int main(){
	int n, i;
	do{
		printf("Accept n= ");
		scanf("%d", &n);
	}
	while(n<2);
	for(i=2; i<n; i++){
		if(prime(i)==1){
			printf("%d ",i);
		}
	}
	return 0;
}

