#include <stdio.h>

int sumDigits(int n){
	int sum=0; //initialize sum of digits 
	do{
		int remainder= n%10; //get a digit at unit position
		n=n/10;
		sum +=remainder;
	}
	while(n>0);
	return sum;
}

int main(){
	int n, S=0;
	do{
		printf("Accept n=");
		scanf("%d", &n);
		if(n>=0){
			S= sumDigits(n);
			printf("%d", S);
		}
	}
	while(n>=0);
	return 0;
}
